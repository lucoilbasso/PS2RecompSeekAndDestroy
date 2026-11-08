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

// Function: Create__8ApcPanelP8ApcRsc3D
// Address: 0x1da5b8 - 0x1da634
void Create__8ApcPanelP8ApcRsc3D_0x1da5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__8ApcPanelP8ApcRsc3D_0x1da5b8");
#endif

    switch (ctx->pc) {
        case 0x1da5d4u: goto label_1da5d4;
        case 0x1da5dcu: goto label_1da5dc;
        case 0x1da610u: goto label_1da610;
        case 0x1da61cu: goto label_1da61c;
        default: break;
    }

    ctx->pc = 0x1da5b8u;

    // 0x1da5b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da5bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da5c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da5c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da5cc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1DA5CCu;
    SET_GPR_U32(ctx, 31, 0x1DA5D4u);
    ctx->pc = 0x1DA5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA5CCu;
    // 0x1da5d0: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DA5CCu, 0x1DA5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA5D4u;
label_1da5d4:
    // 0x1da5d4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1DA5D4u;
    SET_GPR_U32(ctx, 31, 0x1DA5DCu);
    ctx->pc = 0x1DA5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA5D4u;
    // 0x1da5d8: 0x24040fd0  addiu       $a0, $zero, 0xFD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DA5D4u, 0x1DA5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA5DCu;
label_1da5dc:
    // 0x1da5dc: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x1da5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1da5e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1da5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1da5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1da5e8: 0x2442f168  addiu       $v0, $v0, -0xE98
    ctx->pc = 0x1da5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963560));
    // 0x1da5ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1da5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1da5f0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1da5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1da5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5f8: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x1da5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1da5fc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1da5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1da600: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1da600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1da604: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x1da604u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1da608: 0xc05686a  jal         func_15A1A8
    ctx->pc = 0x1DA608u;
    SET_GPR_U32(ctx, 31, 0x1DA610u);
    ctx->pc = 0x1DA60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA608u;
    // 0x1da60c: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A1A8u, 0x1DA608u, 0x1DA610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA610u;
label_1da610:
    // 0x1da610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da614: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DA614u;
    SET_GPR_U32(ctx, 31, 0x1DA61Cu);
    ctx->pc = 0x1DA618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA614u;
    // 0x1da618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DA614u, 0x1DA61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA61Cu;
label_1da61c:
    // 0x1da61c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1da61cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da62c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA62Cu;
        // 0x1da630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA634u;
}
