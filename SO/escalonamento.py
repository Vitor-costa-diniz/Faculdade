import matplotlib.pyplot as plt

class Process:
    def __init__(self, pid, burst_time):
        self.pid = pid
        self.burst_time = burst_time
        self.remaining_time = burst_time
        self.waiting_time = 0
        self.turnaround_time = 0


def round_robin(processes, quantum):
    time = 0
    queue = []
    execution_order = []

    while processes or queue:
        for process in processes:
            if process.burst_time > 0:
                if process.burst_time <= quantum:
                    queue.append(process)
                    processes.remove(process)
                else:
                    queue.append(Process(process.pid, quantum))
                    process.burst_time -= quantum

        if not queue:
            time += 1
            execution_order.append(None)
            continue

        process = queue.pop(0)
        execution_order.append(process.pid)

        for p in processes + queue:
            if p != process:
                p.waiting_time += 1

        if process.burst_time <= quantum:
            time += process.burst_time
            process.turnaround_time = time
            process.burst_time = 0
        else:
            time += quantum
            process.burst_time -= quantum
            queue.append(process)

    return execution_order


def calculate_metrics(processes):
    if not processes:
        return 0, 0, 0  # Evite a divisão por zero quando não houver processos

    total_waiting_time = sum(process.waiting_time for process in processes)
    total_turnaround_time = sum(process.turnaround_time for process in processes)
    average_waiting_time = total_waiting_time / len(processes)
    average_turnaround_time = total_turnaround_time / len(processes)
    throughput = len(processes) / processes[-1].turnaround_time
    return average_waiting_time, average_turnaround_time, throughput

def plot_execution_sequence(execution_order, quantum):
    plt.figure(figsize=(8, 6))
    plt.plot(execution_order, marker='o')
    plt.title(f"Sequência de execução (Quantum: {quantum})")
    plt.xlabel("Tempo")
    plt.ylabel("Processo")
    plt.grid(True)
    plt.show()


def main():
    # Defina seus processos com os tempos de burst desejados
    processes = [Process(1, 8), Process(2, 10), Process(3, 6)]

    # Defina diferentes valores de quantum para teste
    quantums = [1, 2, 4]

    for quantum in quantums:
        print(f"Quantum: {quantum}")
        processes_copy = [Process(p.pid, p.burst_time) for p in processes]
        execution_order = round_robin(processes_copy, quantum)
        avg_waiting, avg_turnaround, throughput = calculate_metrics(processes_copy)

        print(f"Execução da ordem: {execution_order}")
        print(f"Tempo médio de espera: {avg_waiting}")
        print(f"Tempo médio de retorno: {avg_turnaround}")
        print(f"Vazão: {throughput}\n")

        # Chame a função para plotar a sequência de execução
        plot_execution_sequence(execution_order, quantum)


if __name__ == "__main__":
    main()
