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

// Function: entry_0018858c
// Address: 0x18858c - 0x1885b0
void entry_0018858c_0x18858c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018858c_0x18858c");
#endif

    ctx->pc = 0x18858cu;

    // 0x18858c: 0x10a00064  beqz        $a1, . + 4 + (0x64 << 2)
    ctx->pc = 0x18858Cu;
    {
        const bool branch_taken_0x18858c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x188590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18858Cu;
        // 0x188590: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18858c) {
            ctx->pc = 0x188720u;
            return;
        }
    }
    ctx->pc = 0x188594u;
    // 0x188594: 0xae8501b8  sw          $a1, 0x1B8($s4)
    ctx->pc = 0x188594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 440), GPR_U32(ctx, 5));
    // 0x188598: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x188598u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18859c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x18859cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885a0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1885a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885a4: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1885A4u;
    {
        const bool branch_taken_0x1885a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885A4u;
        // 0x1885a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885a4) {
            ctx->pc = 0x1885B0u;
            return;
        }
    }
    ctx->pc = 0x1885ACu;
    // 0x1885ac: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1885acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x1885b0u;
}
