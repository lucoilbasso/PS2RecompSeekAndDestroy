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

// Function: Cmd_PLAYER_NPC_Entry__FP15BsSCDEntControl
// Address: 0x14d308 - 0x14d37c
void Cmd_PLAYER_NPC_Entry__FP15BsSCDEntControl_0x14d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PLAYER_NPC_Entry__FP15BsSCDEntControl_0x14d308");
#endif

    switch (ctx->pc) {
        case 0x14d308u: goto label_14d308;
        case 0x14d30cu: goto label_14d30c;
        case 0x14d310u: goto label_14d310;
        case 0x14d314u: goto label_14d314;
        case 0x14d318u: goto label_14d318;
        case 0x14d31cu: goto label_14d31c;
        case 0x14d320u: goto label_14d320;
        case 0x14d324u: goto label_14d324;
        case 0x14d328u: goto label_14d328;
        case 0x14d32cu: goto label_14d32c;
        case 0x14d330u: goto label_14d330;
        case 0x14d334u: goto label_14d334;
        case 0x14d338u: goto label_14d338;
        case 0x14d33cu: goto label_14d33c;
        case 0x14d340u: goto label_14d340;
        case 0x14d344u: goto label_14d344;
        case 0x14d348u: goto label_14d348;
        case 0x14d34cu: goto label_14d34c;
        case 0x14d350u: goto label_14d350;
        case 0x14d354u: goto label_14d354;
        case 0x14d358u: goto label_14d358;
        case 0x14d35cu: goto label_14d35c;
        case 0x14d360u: goto label_14d360;
        case 0x14d364u: goto label_14d364;
        case 0x14d368u: goto label_14d368;
        case 0x14d36cu: goto label_14d36c;
        case 0x14d370u: goto label_14d370;
        case 0x14d374u: goto label_14d374;
        case 0x14d378u: goto label_14d378;
        default: break;
    }

    ctx->pc = 0x14d308u;

label_14d308:
    // 0x14d308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_14d30c:
    // 0x14d30c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14d310:
    // 0x14d310: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14d310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_14d314:
    // 0x14d314: 0xc06a26e  jal         func_1A89B8
label_14d318:
    if (ctx->pc == 0x14D318u) {
        ctx->pc = 0x14D31Cu;
        goto label_14d31c;
    }
    ctx->pc = 0x14D314u;
    SET_GPR_U32(ctx, 31, 0x14D31Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14D314u, 0x14D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D31Cu;
label_14d31c:
    // 0x14d31c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x14d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_14d320:
    // 0x14d320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14d324:
    // 0x14d324: 0x8c64b830  lw          $a0, -0x47D0($v1)
    ctx->pc = 0x14d324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
label_14d328:
    // 0x14d328: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x14d328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_14d32c:
    // 0x14d32c: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x14d32cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_14d330:
    // 0x14d330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14d334:
    // 0x14d334: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x14d334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14d338:
    // 0x14d338: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x14d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_14d33c:
    // 0x14d33c: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x14d33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_14d340:
    // 0x14d340: 0xac503630  sw          $s0, 0x3630($v0)
    ctx->pc = 0x14d340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13872), GPR_U32(ctx, 16));
label_14d344:
    // 0x14d344: 0x34630a00  ori         $v1, $v1, 0xA00
    ctx->pc = 0x14d344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2560);
label_14d348:
    // 0x14d348: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x14d348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_14d34c:
    // 0x14d34c: 0xae030180  sw          $v1, 0x180($s0)
    ctx->pc = 0x14d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 3));
label_14d350:
    // 0x14d350: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x14d350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_14d354:
    // 0x14d354: 0x40f809  jalr        $v0
label_14d358:
    if (ctx->pc == 0x14D358u) {
        ctx->pc = 0x14D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D354u;
        // 0x14d358: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D35Cu;
        goto label_14d35c;
    }
    ctx->pc = 0x14D354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14D35Cu);
        ctx->pc = 0x14D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D354u;
        // 0x14d358: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D354u, 0x14D35Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14D35Cu;
label_14d35c:
    // 0x14d35c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x14d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_14d360:
    // 0x14d360: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x14d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_14d364:
    // 0x14d364: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14d364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14d368:
    // 0x14d368: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14d368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14d36c:
    // 0x14d36c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x14d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_14d370:
    // 0x14d370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d374:
    // 0x14d374: 0x3e00008  jr          $ra
label_14d378:
    if (ctx->pc == 0x14D378u) {
        ctx->pc = 0x14D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D374u;
        // 0x14d378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D37Cu;
        goto label_fallthrough_0x14d374;
    }
    ctx->pc = 0x14D374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D374u;
        // 0x14d378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14d374:
    ctx->pc = 0x14D37Cu;
}
