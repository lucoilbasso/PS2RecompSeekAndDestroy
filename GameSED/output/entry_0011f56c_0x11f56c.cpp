#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0011f56c
// Address: 0x11f56c - 0x11f598
void entry_0011f56c_0x11f56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f56c_0x11f56c");
#endif

    ctx->pc = 0x11f56cu;

    // 0x11f56c: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x11F56Cu;
    {
        const bool branch_taken_0x11f56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F56Cu;
        // 0x11f570: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f56c) {
            ctx->pc = 0x11F6D4u;
            return;
        }
    }
    ctx->pc = 0x11F574u;
    // 0x11f574: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x11f574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x11f578: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x11f578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11f57c: 0xc787807c  lwc1        $f7, -0x7F84($gp)
    ctx->pc = 0x11f57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x11f580: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x11f580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x11f584: 0x773021  addu        $a2, $v1, $s7
    ctx->pc = 0x11f584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x11f588: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x11f588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f58c: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x11f58cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11f590: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x11f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11f594: 0x0  nop
    ctx->pc = 0x11f594u;
    // NOP
    ctx->pc = 0x11f598u;
}
