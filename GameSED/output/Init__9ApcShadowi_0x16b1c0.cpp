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

// Function: Init__9ApcShadowi
// Address: 0x16b1c0 - 0x16b2f0
void Init__9ApcShadowi_0x16b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9ApcShadowi_0x16b1c0");
#endif

    switch (ctx->pc) {
        case 0x16b1ecu: goto label_16b1ec;
        case 0x16b228u: goto label_16b228;
        case 0x16b230u: goto label_16b230;
        case 0x16b250u: goto label_16b250;
        case 0x16b258u: goto label_16b258;
        case 0x16b26cu: goto label_16b26c;
        case 0x16b280u: goto label_16b280;
        case 0x16b290u: goto label_16b290;
        case 0x16b2a0u: goto label_16b2a0;
        case 0x16b2b8u: goto label_16b2b8;
        case 0x16b2d4u: goto label_16b2d4;
        default: break;
    }

    ctx->pc = 0x16b1c0u;

    // 0x16b1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16b1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16b1c4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x16b1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16b1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b1cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16b1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16b1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b1d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16b1dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16b1e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16b1e4: 0xc06408c  jal         func_190230
    ctx->pc = 0x16B1E4u;
    SET_GPR_U32(ctx, 31, 0x16B1ECu);
    ctx->pc = 0x16B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1E4u;
    // 0x16b1e8: 0x24050303  addiu       $a1, $zero, 0x303 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190230u, 0x16B1E4u, 0x16B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1ECu;
label_16b1ec:
    // 0x16b1ec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x16b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16b1f0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x16b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x16b1f4: 0x24040186  addiu       $a0, $zero, 0x186
    ctx->pc = 0x16b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    // 0x16b1f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b1fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16b1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16b200: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x16b200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x16b204: 0xae2001e0  sw          $zero, 0x1E0($s1)
    ctx->pc = 0x16b204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
    // 0x16b208: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x16b208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x16b20c: 0xae2001e4  sw          $zero, 0x1E4($s1)
    ctx->pc = 0x16b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
    // 0x16b210: 0x1605000b  bne         $s0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x16B210u;
    {
        const bool branch_taken_0x16b210 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x16B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B210u;
        // 0x16b214: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b210) {
            ctx->pc = 0x16B240u;
            goto label_16b240;
        }
    }
    ctx->pc = 0x16B218u;
    // 0x16b218: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x16b218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16b21c: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x16b21cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x16b220: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16B220u;
    SET_GPR_U32(ctx, 31, 0x16B228u);
    ctx->pc = 0x16B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B220u;
    // 0x16b224: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16B220u, 0x16B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B228u;
label_16b228:
    // 0x16b228: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16B228u;
    SET_GPR_U32(ctx, 31, 0x16B230u);
    ctx->pc = 0x16B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B228u;
    // 0x16b22c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16B228u, 0x16B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B230u;
label_16b230:
    // 0x16b230: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x16b230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16b234: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16B234u;
    {
        const bool branch_taken_0x16b234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B234u;
        // 0x16b238: 0x246503d0  addiu       $a1, $v1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b234) {
            ctx->pc = 0x16B260u;
            goto label_16b260;
        }
    }
    ctx->pc = 0x16B23Cu;
    // 0x16b23c: 0x0  nop
    ctx->pc = 0x16b23cu;
    // NOP
label_16b240:
    // 0x16b240: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x16b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16b244: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x16b244u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x16b248: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16B248u;
    SET_GPR_U32(ctx, 31, 0x16B250u);
    ctx->pc = 0x16B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B248u;
    // 0x16b24c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16B248u, 0x16B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B250u;
label_16b250:
    // 0x16b250: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16B250u;
    SET_GPR_U32(ctx, 31, 0x16B258u);
    ctx->pc = 0x16B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B250u;
    // 0x16b254: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16B250u, 0x16B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B258u;
label_16b258:
    // 0x16b258: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x16b258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16b25c: 0x24650420  addiu       $a1, $v1, 0x420
    ctx->pc = 0x16b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1056));
label_16b260:
    // 0x16b260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b264: 0xc063d68  jal         func_18F5A0
    ctx->pc = 0x16B264u;
    SET_GPR_U32(ctx, 31, 0x16B26Cu);
    ctx->pc = 0x16B268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B264u;
    // 0x16b268: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F5A0u, 0x16B264u, 0x16B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B26Cu;
label_16b26c:
    // 0x16b26c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x16b270: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x16b270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x16b274: 0x2453d3d0  addiu       $s3, $v0, -0x2C30
    ctx->pc = 0x16b274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955984));
    // 0x16b278: 0x2472d430  addiu       $s2, $v1, -0x2BD0
    ctx->pc = 0x16b278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
    // 0x16b27c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16b27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16b280:
    // 0x16b280: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x16b280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x16b284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b288: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B288u;
    SET_GPR_U32(ctx, 31, 0x16B290u);
    ctx->pc = 0x16B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B288u;
    // 0x16b28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B288u, 0x16B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B290u;
label_16b290:
    // 0x16b290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b294: 0x27868b50  addiu       $a2, $gp, -0x74B0
    ctx->pc = 0x16b294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
    // 0x16b298: 0xc0640d6  jal         func_190358
    ctx->pc = 0x16B298u;
    SET_GPR_U32(ctx, 31, 0x16B2A0u);
    ctx->pc = 0x16B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B298u;
    // 0x16b29c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x16B298u, 0x16B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2A0u;
label_16b2a0:
    // 0x16b2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16b2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16b2ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16b2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2b0: 0xc064104  jal         func_190410
    ctx->pc = 0x16B2B0u;
    SET_GPR_U32(ctx, 31, 0x16B2B8u);
    ctx->pc = 0x16B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2B0u;
    // 0x16b2b4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190410u, 0x16B2B0u, 0x16B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2B8u;
label_16b2b8:
    // 0x16b2b8: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x16b2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x16b2bc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x16B2BCu;
    {
        const bool branch_taken_0x16b2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2BCu;
        // 0x16b2c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2bc) {
            ctx->pc = 0x16B280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b280;
        }
    }
    ctx->pc = 0x16B2C4u;
    // 0x16b2c4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16b2c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16b2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2cc: 0xc068584  jal         func_1A1610
    ctx->pc = 0x16B2CCu;
    SET_GPR_U32(ctx, 31, 0x16B2D4u);
    ctx->pc = 0x16B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2CCu;
    // 0x16b2d0: 0x24841220  addiu       $a0, $a0, 0x1220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x16B2CCu, 0x16B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2D4u;
label_16b2d4:
    // 0x16b2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b2d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16b2d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b2dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16b2dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b2e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16b2e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b2e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16b2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2E8u;
        // 0x16b2ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B2F0u;
}
