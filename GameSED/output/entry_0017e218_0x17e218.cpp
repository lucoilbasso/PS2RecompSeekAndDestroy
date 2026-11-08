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

// Function: entry_0017e218
// Address: 0x17e218 - 0x17e268
void entry_0017e218_0x17e218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e218_0x17e218");
#endif

    switch (ctx->pc) {
        case 0x17e250u: goto label_17e250;
        default: break;
    }

    ctx->pc = 0x17e218u;

    // 0x17e218: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17e218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17e21c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x17e21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x17e220: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17e220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17e224: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x17e224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x17e228: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17e228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17e22c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x17e22cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17e230: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x17e230u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x17e234: 0x86470004  lh          $a3, 0x4($s2)
    ctx->pc = 0x17e234u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17e238: 0x864a001c  lh          $t2, 0x1C($s2)
    ctx->pc = 0x17e238u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x17e23c: 0x864b001e  lh          $t3, 0x1E($s2)
    ctx->pc = 0x17e23cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x17e240: 0x96530004  lhu         $s3, 0x4($s2)
    ctx->pc = 0x17e240u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17e244: 0x9651001c  lhu         $s1, 0x1C($s2)
    ctx->pc = 0x17e244u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x17e248: 0xc06ac76  jal         func_1AB1D8
    ctx->pc = 0x17E248u;
    SET_GPR_U32(ctx, 31, 0x17E250u);
    ctx->pc = 0x17E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E248u;
    // 0x17e24c: 0x9650001e  lhu         $s0, 0x1E($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB1D8u, 0x17E248u, 0x17E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E250u;
label_17e250:
    // 0x17e250: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x17e250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x17e254: 0x16630004  bne         $s3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E254u;
    {
        const bool branch_taken_0x17e254 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x17E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E254u;
        // 0x17e258: 0x2301018  mult        $v0, $s1, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e254) {
            ctx->pc = 0x17E268u;
            return;
        }
    }
    ctx->pc = 0x17E25Cu;
    // 0x17e25c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E25Cu;
    {
        const bool branch_taken_0x17e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E25Cu;
        // 0x17e260: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e25c) {
            ctx->pc = 0x17E26Cu;
            return;
        }
    }
    ctx->pc = 0x17E264u;
    // 0x17e264: 0x0  nop
    ctx->pc = 0x17e264u;
    // NOP
    ctx->pc = 0x17e268u;
}
