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

// Function: UsePartsRemove__20ApItemGameInfomations
// Address: 0x118980 - 0x1189d0
void UsePartsRemove__20ApItemGameInfomations_0x118980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UsePartsRemove__20ApItemGameInfomations_0x118980");
#endif

    switch (ctx->pc) {
        case 0x1189b4u: goto label_1189b4;
        default: break;
    }

    ctx->pc = 0x118980u;

    // 0x118980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118988: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x118988u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x11898c: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x11898cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x118990: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118994: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11899c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x11899cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1189a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1189a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1189a4: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1189a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1189a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1189a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1189ac: 0xc045360  jal         func_114D80
    ctx->pc = 0x1189ACu;
    SET_GPR_U32(ctx, 31, 0x1189B4u);
    ctx->pc = 0x1189B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1189ACu;
    // 0x1189b0: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1189ACu, 0x1189B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1189B4u;
label_1189b4:
    // 0x1189b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1189b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1189b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1189b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1189bc: 0xa6020ff0  sh          $v0, 0xFF0($s0)
    ctx->pc = 0x1189bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4080), (uint16_t)GPR_U32(ctx, 2));
    // 0x1189c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1189c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1189c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1189c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1189c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1189C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1189CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189C8u;
        // 0x1189cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1189C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1189D0u;
}
