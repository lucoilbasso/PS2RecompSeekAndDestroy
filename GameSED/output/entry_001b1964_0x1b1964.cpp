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

// Function: entry_001b1964
// Address: 0x1b1964 - 0x1b199c
void entry_001b1964_0x1b1964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1964_0x1b1964");
#endif

    switch (ctx->pc) {
        case 0x1b198cu: goto label_1b198c;
        default: break;
    }

    ctx->pc = 0x1b1964u;

    // 0x1b1964: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b1964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1968: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b1968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b196c: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1b196cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b1970: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1b1970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1974: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1b1974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1b1978: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1b1978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b197c: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1b197cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x1b1980: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1984: 0xc06df7e  jal         func_1B7DF8
    ctx->pc = 0x1B1984u;
    SET_GPR_U32(ctx, 31, 0x1B198Cu);
    ctx->pc = 0x1B1988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1984u;
    // 0x1b1988: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DF8u, 0x1B1984u, 0x1B198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B198Cu;
label_1b198c:
    // 0x1b198c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B198Cu;
    {
        const bool branch_taken_0x1b198c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B198Cu;
        // 0x1b1990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b198c) {
            ctx->pc = 0x1B1A1Cu;
            return;
        }
    }
    ctx->pc = 0x1B1994u;
    // 0x1b1994: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B1994u;
    {
        const bool branch_taken_0x1b1994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1994) {
            ctx->pc = 0x1B19F8u;
            return;
        }
    }
    ctx->pc = 0x1B199Cu;
}
