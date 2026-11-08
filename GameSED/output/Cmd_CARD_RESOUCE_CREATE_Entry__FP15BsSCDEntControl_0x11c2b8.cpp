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

// Function: Cmd_CARD_RESOUCE_CREATE_Entry__FP15BsSCDEntControl
// Address: 0x11c2b8 - 0x11c350
void Cmd_CARD_RESOUCE_CREATE_Entry__FP15BsSCDEntControl_0x11c2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_RESOUCE_CREATE_Entry__FP15BsSCDEntControl_0x11c2b8");
#endif

    switch (ctx->pc) {
        case 0x11c2d0u: goto label_11c2d0;
        case 0x11c2e0u: goto label_11c2e0;
        case 0x11c2ecu: goto label_11c2ec;
        case 0x11c314u: goto label_11c314;
        case 0x11c330u: goto label_11c330;
        case 0x11c33cu: goto label_11c33c;
        default: break;
    }

    ctx->pc = 0x11c2b8u;

    // 0x11c2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c2bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c2c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11c2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c2c8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11C2C8u;
    SET_GPR_U32(ctx, 31, 0x11C2D0u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11C2C8u, 0x11C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2D0u;
label_11c2d0:
    // 0x11c2d0: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x11c2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11c2d4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x11c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11c2d8: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x11C2D8u;
    SET_GPR_U32(ctx, 31, 0x11C2E0u);
    ctx->pc = 0x11C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2D8u;
    // 0x11c2dc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x11C2D8u, 0x11C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2E0u;
label_11c2e0:
    // 0x11c2e0: 0x3404e2c0  ori         $a0, $zero, 0xE2C0
    ctx->pc = 0x11c2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58048);
    // 0x11c2e4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x11C2E4u;
    SET_GPR_U32(ctx, 31, 0x11C2ECu);
    ctx->pc = 0x11C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2E4u;
    // 0x11c2e8: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x11C2E4u, 0x11C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2ECu;
label_11c2ec:
    // 0x11c2ec: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11c2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x11c2f0: 0x242137c8  addiu       $at, $at, 0x37C8
    ctx->pc = 0x11c2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 14280));
    // 0x11c2f4: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x11c2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x11c2f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11c2f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2fc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11c300: 0x2442e900  addiu       $v0, $v0, -0x1700
    ctx->pc = 0x11c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961408));
    // 0x11c304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c308: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x11c308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x11c30c: 0xc05e518  jal         func_179460
    ctx->pc = 0x11C30Cu;
    SET_GPR_U32(ctx, 31, 0x11C314u);
    ctx->pc = 0x11C310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C30Cu;
    // 0x11c310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179460u, 0x11C30Cu, 0x11C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C314u;
label_11c314:
    // 0x11c314: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x11c314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11c318: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c31c: 0x26264e00  addiu       $a2, $s1, 0x4E00
    ctx->pc = 0x11c31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 19968));
    // 0x11c320: 0x26254600  addiu       $a1, $s1, 0x4600
    ctx->pc = 0x11c320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17920));
    // 0x11c324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c328: 0xc0460e6  jal         func_118398
    ctx->pc = 0x11C328u;
    SET_GPR_U32(ctx, 31, 0x11C330u);
    ctx->pc = 0x11C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C328u;
    // 0x11c32c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118398u, 0x11C328u, 0x11C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C330u;
label_11c330:
    // 0x11c330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c334: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x11C334u;
    SET_GPR_U32(ctx, 31, 0x11C33Cu);
    ctx->pc = 0x11C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C334u;
    // 0x11c338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x11C334u, 0x11C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C33Cu;
label_11c33c:
    // 0x11c33c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c33cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c344: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c348: 0x3e00008  jr          $ra
    ctx->pc = 0x11C348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C348u;
        // 0x11c34c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C350u;
}
