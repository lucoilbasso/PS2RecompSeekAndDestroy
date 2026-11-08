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

// Function: entry_001aaff4
// Address: 0x1aaff4 - 0x1ab0f4
void entry_001aaff4_0x1aaff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaff4_0x1aaff4");
#endif

    switch (ctx->pc) {
        case 0x1aaffcu: goto label_1aaffc;
        case 0x1ab014u: goto label_1ab014;
        case 0x1ab02cu: goto label_1ab02c;
        case 0x1ab044u: goto label_1ab044;
        case 0x1ab05cu: goto label_1ab05c;
        case 0x1ab074u: goto label_1ab074;
        case 0x1ab08cu: goto label_1ab08c;
        case 0x1ab0a4u: goto label_1ab0a4;
        case 0x1ab0bcu: goto label_1ab0bc;
        case 0x1ab0d4u: goto label_1ab0d4;
        case 0x1ab0ecu: goto label_1ab0ec;
        default: break;
    }

    ctx->pc = 0x1aaff4u;

    // 0x1aaff4: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AAFF4u;
    SET_GPR_U32(ctx, 31, 0x1AAFFCu);
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AAFF4u, 0x1AAFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAFFCu;
label_1aaffc:
    // 0x1aaffc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1aaffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab000: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab004: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1ab004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1ab008: 0x24849530  addiu       $a0, $a0, -0x6AD0
    ctx->pc = 0x1ab008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939952));
    // 0x1ab00c: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB00Cu;
    SET_GPR_U32(ctx, 31, 0x1AB014u);
    ctx->pc = 0x1AB010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB00Cu;
    // 0x1ab010: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB00Cu, 0x1AB014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB014u;
label_1ab014:
    // 0x1ab014: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab018: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab01c: 0x34429030  ori         $v0, $v0, 0x9030
    ctx->pc = 0x1ab01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36912);
    // 0x1ab020: 0x24849540  addiu       $a0, $a0, -0x6AC0
    ctx->pc = 0x1ab020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939968));
    // 0x1ab024: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB024u;
    SET_GPR_U32(ctx, 31, 0x1AB02Cu);
    ctx->pc = 0x1AB028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB024u;
    // 0x1ab028: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB024u, 0x1AB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB02Cu;
label_1ab02c:
    // 0x1ab02c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab030: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab034: 0x34429010  ori         $v0, $v0, 0x9010
    ctx->pc = 0x1ab034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36880);
    // 0x1ab038: 0x24849550  addiu       $a0, $a0, -0x6AB0
    ctx->pc = 0x1ab038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939984));
    // 0x1ab03c: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB03Cu;
    SET_GPR_U32(ctx, 31, 0x1AB044u);
    ctx->pc = 0x1AB040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB03Cu;
    // 0x1ab040: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB03Cu, 0x1AB044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB044u;
label_1ab044:
    // 0x1ab044: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab048: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab04c: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x1ab04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x1ab050: 0x24849560  addiu       $a0, $a0, -0x6AA0
    ctx->pc = 0x1ab050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940000));
    // 0x1ab054: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB054u;
    SET_GPR_U32(ctx, 31, 0x1AB05Cu);
    ctx->pc = 0x1AB058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB054u;
    // 0x1ab058: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB054u, 0x1AB05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB05Cu;
label_1ab05c:
    // 0x1ab05c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab060: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab064: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x1ab064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1ab068: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x1ab068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x1ab06c: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB06Cu;
    SET_GPR_U32(ctx, 31, 0x1AB074u);
    ctx->pc = 0x1AB070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB06Cu;
    // 0x1ab070: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB06Cu, 0x1AB074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB074u;
label_1ab074:
    // 0x1ab074: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab078: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab07c: 0x3442a030  ori         $v0, $v0, 0xA030
    ctx->pc = 0x1ab07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41008);
    // 0x1ab080: 0x24849580  addiu       $a0, $a0, -0x6A80
    ctx->pc = 0x1ab080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940032));
    // 0x1ab084: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB084u;
    SET_GPR_U32(ctx, 31, 0x1AB08Cu);
    ctx->pc = 0x1AB088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB084u;
    // 0x1ab088: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB084u, 0x1AB08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB08Cu;
label_1ab08c:
    // 0x1ab08c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab090: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab094: 0x3442a010  ori         $v0, $v0, 0xA010
    ctx->pc = 0x1ab094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40976);
    // 0x1ab098: 0x24849590  addiu       $a0, $a0, -0x6A70
    ctx->pc = 0x1ab098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940048));
    // 0x1ab09c: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB09Cu;
    SET_GPR_U32(ctx, 31, 0x1AB0A4u);
    ctx->pc = 0x1AB0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB09Cu;
    // 0x1ab0a0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB09Cu, 0x1AB0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0A4u;
label_1ab0a4:
    // 0x1ab0a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab0a8: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab0ac: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x1ab0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x1ab0b0: 0x248495a0  addiu       $a0, $a0, -0x6A60
    ctx->pc = 0x1ab0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
    // 0x1ab0b4: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB0B4u;
    SET_GPR_U32(ctx, 31, 0x1AB0BCu);
    ctx->pc = 0x1AB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0B4u;
    // 0x1ab0b8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB0B4u, 0x1AB0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0BCu;
label_1ab0bc:
    // 0x1ab0bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab0c0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab0c4: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x1ab0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x1ab0c8: 0x248495b0  addiu       $a0, $a0, -0x6A50
    ctx->pc = 0x1ab0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940080));
    // 0x1ab0cc: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB0CCu;
    SET_GPR_U32(ctx, 31, 0x1AB0D4u);
    ctx->pc = 0x1AB0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0CCu;
    // 0x1ab0d0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB0CCu, 0x1AB0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0D4u;
label_1ab0d4:
    // 0x1ab0d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab0d8: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab0dc: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x1ab0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x1ab0e0: 0x248495c8  addiu       $a0, $a0, -0x6A38
    ctx->pc = 0x1ab0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940104));
    // 0x1ab0e4: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB0E4u;
    SET_GPR_U32(ctx, 31, 0x1AB0ECu);
    ctx->pc = 0x1AB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0E4u;
    // 0x1ab0e8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB0E4u, 0x1AB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0ECu;
label_1ab0ec:
    // 0x1ab0ec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1AB0ECu;
    {
        const bool branch_taken_0x1ab0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0ECu;
        // 0x1ab0f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0ec) {
            ctx->pc = 0x1AB168u;
            return;
        }
    }
    ctx->pc = 0x1AB0F4u;
}
