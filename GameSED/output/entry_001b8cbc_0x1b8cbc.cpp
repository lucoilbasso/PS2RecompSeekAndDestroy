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

// Function: entry_001b8cbc
// Address: 0x1b8cbc - 0x1b8d14
void entry_001b8cbc_0x1b8cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8cbc_0x1b8cbc");
#endif

    switch (ctx->pc) {
        case 0x1b8d0cu: goto label_1b8d0c;
        default: break;
    }

    ctx->pc = 0x1b8cbcu;

    // 0x1b8cbc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1b8cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b8cc0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1b8cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1b8cc4: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x1b8cc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b8cc8: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1b8cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b8ccc: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x1b8cccu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x1b8cd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8cd4: 0x27c2d410  addiu       $v0, $fp, -0x2BF0
    ctx->pc = 0x1b8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956048));
    // 0x1b8cd8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1b8cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b8cdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b8ce0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1b8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b8ce4: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8CE4u;
    {
        const bool branch_taken_0x1b8ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B8CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CE4u;
        // 0x1b8ce8: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ce4) {
            ctx->pc = 0x1B8D14u;
            return;
        }
    }
    ctx->pc = 0x1B8CECu;
    // 0x1b8cec: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b8cf0: 0x8c43c024  lw          $v1, -0x3FDC($v0)
    ctx->pc = 0x1b8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24C024u));
    // 0x1b8cf4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B8CF4u;
    {
        const bool branch_taken_0x1b8cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CF4u;
        // 0x1b8cf8: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8cf4) {
            ctx->pc = 0x1B8DA4u;
            return;
        }
    }
    ctx->pc = 0x1B8CFCu;
    // 0x1b8cfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b8cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8d00: 0x2484ae48  addiu       $a0, $a0, -0x51B8
    ctx->pc = 0x1b8d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946376));
    // 0x1b8d04: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1B8D04u;
    SET_GPR_U32(ctx, 31, 0x1B8D0Cu);
    ctx->pc = 0x1B8D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8D04u;
    // 0x1b8d08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1B8D04u, 0x1B8D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8D0Cu;
label_1b8d0c:
    // 0x1b8d0c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1B8D0Cu;
    {
        const bool branch_taken_0x1b8d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D0Cu;
        // 0x1b8d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d0c) {
            ctx->pc = 0x1B8E0Cu;
            return;
        }
    }
    ctx->pc = 0x1B8D14u;
}
