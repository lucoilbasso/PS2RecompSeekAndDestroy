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

// Function: entry_0018fdb8
// Address: 0x18fdb8 - 0x18fde0
void entry_0018fdb8_0x18fdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fdb8_0x18fdb8");
#endif

    ctx->pc = 0x18fdb8u;

    // 0x18fdb8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x18FDB8u;
    {
        const bool branch_taken_0x18fdb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDB8u;
        // 0x18fdbc: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdb8) {
            ctx->pc = 0x18FDE0u;
            return;
        }
    }
    ctx->pc = 0x18FDC0u;
    // 0x18fdc0: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FDC0u;
    {
        const bool branch_taken_0x18fdc0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDC0u;
        // 0x18fdc4: 0xdf848c90  ld          $a0, -0x7370($gp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdc0) {
            ctx->pc = 0x18FDE4u;
            return;
        }
    }
    ctx->pc = 0x18FDC8u;
    // 0x18fdc8: 0xdf838c80  ld          $v1, -0x7380($gp)
    ctx->pc = 0x18fdc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x18fdcc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x18fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18fdd0: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x18fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x18fdd4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18fdd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18fdd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18FDD8u;
    {
        const bool branch_taken_0x18fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDD8u;
        // 0x18fddc: 0xfd030000  sd          $v1, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdd8) {
            ctx->pc = 0x18FDF8u;
            return;
        }
    }
    ctx->pc = 0x18FDE0u;
}
