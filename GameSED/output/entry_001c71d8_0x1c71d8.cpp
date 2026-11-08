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

// Function: entry_001c71d8
// Address: 0x1c71d8 - 0x1c72b0
void entry_001c71d8_0x1c71d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c71d8_0x1c71d8");
#endif

    switch (ctx->pc) {
        case 0x1c71e4u: goto label_1c71e4;
        case 0x1c71fcu: goto label_1c71fc;
        case 0x1c7208u: goto label_1c7208;
        case 0x1c721cu: goto label_1c721c;
        case 0x1c722cu: goto label_1c722c;
        case 0x1c723cu: goto label_1c723c;
        case 0x1c7248u: goto label_1c7248;
        case 0x1c7258u: goto label_1c7258;
        default: break;
    }

    ctx->pc = 0x1c71d8u;

    // 0x1c71d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c71d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71dc: 0xc071fe2  jal         func_1C7F88
    ctx->pc = 0x1C71DCu;
    SET_GPR_U32(ctx, 31, 0x1C71E4u);
    ctx->pc = 0x1C71E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C71DCu;
    // 0x1c71e0: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7F88u, 0x1C71DCu, 0x1C71E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71E4u;
label_1c71e4:
    // 0x1c71e4: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x1c71e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1c71e8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c71e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c71ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c71ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c71f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71f4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C71F4u;
    SET_GPR_U32(ctx, 31, 0x1C71FCu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C71F4u, 0x1C71FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71FCu;
label_1c71fc:
    // 0x1c71fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c71fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7200: 0xc071f5c  jal         func_1C7D70
    ctx->pc = 0x1C7200u;
    SET_GPR_U32(ctx, 31, 0x1C7208u);
    ctx->pc = 0x1C7D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D70u, 0x1C7200u, 0x1C7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7208u;
label_1c7208:
    // 0x1c7208: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x1c7208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x1c720c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1c720cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1c7210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7214: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C7214u;
    SET_GPR_U32(ctx, 31, 0x1C721Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C7214u, 0x1C721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C721Cu;
label_1c721c:
    // 0x1c721c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c721cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7220: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7224: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7224u;
    SET_GPR_U32(ctx, 31, 0x1C722Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7224u, 0x1C722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C722Cu;
label_1c722c:
    // 0x1c722c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c722cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7234: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C7234u;
    SET_GPR_U32(ctx, 31, 0x1C723Cu);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C7234u, 0x1C723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C723Cu;
label_1c723c:
    // 0x1c723c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c723cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7240: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C7240u;
    SET_GPR_U32(ctx, 31, 0x1C7248u);
    ctx->pc = 0x1C7244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7240u;
    // 0x1c7244: 0xafa2024c  sw          $v0, 0x24C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C7240u, 0x1C7248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7248u;
label_1c7248:
    // 0x1c7248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c724c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c724cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7250: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7250u;
    SET_GPR_U32(ctx, 31, 0x1C7258u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7250u, 0x1C7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7258u;
label_1c7258:
    // 0x1c7258: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x1c7258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1c725c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c725cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7260: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C7260u;
    {
        const bool branch_taken_0x1c7260 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1C7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7260u;
        // 0x1c7264: 0x8fa20250  lw          $v0, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7260) {
            ctx->pc = 0x1C72B0u;
            return;
        }
    }
    ctx->pc = 0x1C7268u;
    // 0x1c7268: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1c7268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1c726c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c7270: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1c7270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1c7274: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1c7274u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c7278: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x1c7278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c727c: 0x8fa8024c  lw          $t0, 0x24C($sp)
    ctx->pc = 0x1c727cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x1c7280: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c7280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c7284: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1c7284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1c7288: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x1c7288u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1c728c: 0x629007  srav        $s2, $v0, $v1
    ctx->pc = 0x1c728cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1c7290: 0x721804  sllv        $v1, $s2, $v1
    ctx->pc = 0x1c7290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
    // 0x1c7294: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x1c7294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x1c7298: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c7298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c729c: 0xafa8024c  sw          $t0, 0x24C($sp)
    ctx->pc = 0x1c729cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 8));
    // 0x1c72a0: 0x82f007  srav        $fp, $v0, $a0
    ctx->pc = 0x1c72a0u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c72a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C72A4u;
    {
        const bool branch_taken_0x1c72a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72A4u;
        // 0x1c72a8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72a4) {
            ctx->pc = 0x1C72E4u;
            return;
        }
    }
    ctx->pc = 0x1C72ACu;
    // 0x1c72ac: 0x0  nop
    ctx->pc = 0x1c72acu;
    // NOP
    ctx->pc = 0x1c72b0u;
}
