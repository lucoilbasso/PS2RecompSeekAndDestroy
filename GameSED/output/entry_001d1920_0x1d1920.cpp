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

// Function: entry_001d1920
// Address: 0x1d1920 - 0x1d1958
void entry_001d1920_0x1d1920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1920_0x1d1920");
#endif

    switch (ctx->pc) {
        case 0x1d1934u: goto label_1d1934;
        default: break;
    }

    ctx->pc = 0x1d1920u;

    // 0x1d1920: 0x680000d  bltz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x1D1920u;
    {
        const bool branch_taken_0x1d1920 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1D1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1920u;
        // 0x1d1924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1920) {
            ctx->pc = 0x1D1958u;
            return;
        }
    }
    ctx->pc = 0x1D1928u;
    // 0x1d1928: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d1928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d192c: 0xc07544f  jal         func_1D513C
    ctx->pc = 0x1D192Cu;
    SET_GPR_U32(ctx, 31, 0x1D1934u);
    ctx->pc = 0x1D1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D192Cu;
    // 0x1d1930: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D513Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D513Cu, 0x1D192Cu, 0x1D1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1934u;
label_1d1934:
    // 0x1d1934: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1D1934u;
    {
        const bool branch_taken_0x1d1934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1934u;
        // 0x1d1938: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1934) {
            ctx->pc = 0x1D1B50u;
            return;
        }
    }
    ctx->pc = 0x1D193Cu;
    // 0x1d193c: 0x55f023  subu        $fp, $v0, $s5
    ctx->pc = 0x1d193cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1d1940: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x1d1940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1d1944: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x1D1944u;
    {
        const bool branch_taken_0x1d1944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1944) {
            ctx->pc = 0x1D1948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1944u;
            // 0x1d1948: 0xa3a001d1  sb          $zero, 0x1D1($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1B54u;
            return;
        }
    }
    ctx->pc = 0x1D194Cu;
    // 0x1d194c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1D194Cu;
    {
        const bool branch_taken_0x1d194c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D194Cu;
        // 0x1d1950: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d194c) {
            ctx->pc = 0x1D1B50u;
            return;
        }
    }
    ctx->pc = 0x1D1954u;
    // 0x1d1954: 0x0  nop
    ctx->pc = 0x1d1954u;
    // NOP
    ctx->pc = 0x1d1958u;
}
