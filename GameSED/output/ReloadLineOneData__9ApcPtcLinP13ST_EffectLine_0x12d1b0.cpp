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

// Function: ReloadLineOneData__9ApcPtcLinP13ST_EffectLine
// Address: 0x12d1b0 - 0x12d278
void ReloadLineOneData__9ApcPtcLinP13ST_EffectLine_0x12d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReloadLineOneData__9ApcPtcLinP13ST_EffectLine_0x12d1b0");
#endif

    ctx->pc = 0x12d1b0u;

    // 0x12d1b0: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x12D1B0u;
    {
        const bool branch_taken_0x12d1b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1B0u;
        // 0x12d1b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1b0) {
            ctx->pc = 0x12D270u;
            goto label_12d270;
        }
    }
    ctx->pc = 0x12D1B8u;
    // 0x12d1b8: 0x8ca6003c  lw          $a2, 0x3C($a1)
    ctx->pc = 0x12d1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x12d1bc: 0x50c00013  beql        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x12D1BCu;
    {
        const bool branch_taken_0x12d1bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d1bc) {
            ctx->pc = 0x12D1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D1BCu;
            // 0x12d1c0: 0x8ca300c4  lw          $v1, 0xC4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D20Cu;
            goto label_12d20c;
        }
    }
    ctx->pc = 0x12D1C4u;
    // 0x12d1c4: 0x8cc20140  lw          $v0, 0x140($a2)
    ctx->pc = 0x12d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 320)));
    // 0x12d1c8: 0x5445000b  bnel        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x12D1C8u;
    {
        const bool branch_taken_0x12d1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x12d1c8) {
            ctx->pc = 0x12D1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D1C8u;
            // 0x12d1cc: 0x8ca3003c  lw          $v1, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D1F8u;
            goto label_12d1f8;
        }
    }
    ctx->pc = 0x12D1D0u;
    // 0x12d1d0: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x12d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x12d1d4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D1D4u;
    {
        const bool branch_taken_0x12d1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d1d4) {
            ctx->pc = 0x12D1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D1D4u;
            // 0x12d1d8: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D1F0u;
            goto label_12d1f0;
        }
    }
    ctx->pc = 0x12D1DCu;
    // 0x12d1dc: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x12d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x12d1e0: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D1E0u;
    {
        const bool branch_taken_0x12d1e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x12d1e0) {
            ctx->pc = 0x12D1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D1E0u;
            // 0x12d1e4: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D1F0u;
            goto label_12d1f0;
        }
    }
    ctx->pc = 0x12D1E8u;
    // 0x12d1e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12D1E8u;
    {
        const bool branch_taken_0x12d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1E8u;
        // 0x12d1ec: 0xacc30140  sw          $v1, 0x140($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1e8) {
            ctx->pc = 0x12D1F4u;
            goto label_12d1f4;
        }
    }
    ctx->pc = 0x12D1F0u;
label_12d1f0:
    // 0x12d1f0: 0xac400140  sw          $zero, 0x140($v0)
    ctx->pc = 0x12d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
label_12d1f4:
    // 0x12d1f4: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x12d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_12d1f8:
    // 0x12d1f8: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x12d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x12d1fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d200: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12d204: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12d204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12d208: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x12d208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_12d20c:
    // 0x12d20c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D20Cu;
    {
        const bool branch_taken_0x12d20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d20c) {
            ctx->pc = 0x12D210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D20Cu;
            // 0x12d210: 0x8ca300c0  lw          $v1, 0xC0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D220u;
            goto label_12d220;
        }
    }
    ctx->pc = 0x12D214u;
    // 0x12d214: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x12d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x12d218: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x12d218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
    // 0x12d21c: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x12d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
label_12d220:
    // 0x12d220: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D220u;
    {
        const bool branch_taken_0x12d220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d220) {
            ctx->pc = 0x12D224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D220u;
            // 0x12d224: 0x8c82015c  lw          $v0, 0x15C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D234u;
            goto label_12d234;
        }
    }
    ctx->pc = 0x12D228u;
    // 0x12d228: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x12d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x12d22c: 0xac6200c4  sw          $v0, 0xC4($v1)
    ctx->pc = 0x12d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
    // 0x12d230: 0x8c82015c  lw          $v0, 0x15C($a0)
    ctx->pc = 0x12d230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
label_12d234:
    // 0x12d234: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D234u;
    {
        const bool branch_taken_0x12d234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x12d234) {
            ctx->pc = 0x12D238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D234u;
            // 0x12d238: 0xaca000c0  sw          $zero, 0xC0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D248u;
            goto label_12d248;
        }
    }
    ctx->pc = 0x12D23Cu;
    // 0x12d23c: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x12d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x12d240: 0xac82015c  sw          $v0, 0x15C($a0)
    ctx->pc = 0x12d240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 2));
    // 0x12d244: 0xaca000c0  sw          $zero, 0xC0($a1)
    ctx->pc = 0x12d244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 0));
label_12d248:
    // 0x12d248: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x12d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x12d24c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D24Cu;
    {
        const bool branch_taken_0x12d24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D24Cu;
        // 0x12d250: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d24c) {
            ctx->pc = 0x12D260u;
            goto label_12d260;
        }
    }
    ctx->pc = 0x12D254u;
    // 0x12d254: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12D254u;
    {
        const bool branch_taken_0x12d254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D254u;
        // 0x12d258: 0xaca000c4  sw          $zero, 0xC4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d254) {
            ctx->pc = 0x12D268u;
            goto label_12d268;
        }
    }
    ctx->pc = 0x12D25Cu;
    // 0x12d25c: 0x0  nop
    ctx->pc = 0x12d25cu;
    // NOP
label_12d260:
    // 0x12d260: 0xac6500c0  sw          $a1, 0xC0($v1)
    ctx->pc = 0x12d260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 5));
    // 0x12d264: 0xaca300c4  sw          $v1, 0xC4($a1)
    ctx->pc = 0x12d264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 3));
label_12d268:
    // 0x12d268: 0xac850158  sw          $a1, 0x158($a0)
    ctx->pc = 0x12d268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 5));
    // 0x12d26c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12d270:
    // 0x12d270: 0x3e00008  jr          $ra
    ctx->pc = 0x12D270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D278u;
}
