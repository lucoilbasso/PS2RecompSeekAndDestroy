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

// Function: UsePartsGet__20ApItemGameInfomations
// Address: 0x1189d0 - 0x118a18
void UsePartsGet__20ApItemGameInfomations_0x1189d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UsePartsGet__20ApItemGameInfomations_0x1189d0");
#endif

    switch (ctx->pc) {
        case 0x1189fcu: goto label_1189fc;
        default: break;
    }

    ctx->pc = 0x1189d0u;

    // 0x1189d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1189d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1189d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1189d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1189d8: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x1189d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1189dc: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x1189dcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x1189e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1189e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1189e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1189e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1189e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1189e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1189ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1189f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1189f4: 0xc045360  jal         func_114D80
    ctx->pc = 0x1189F4u;
    SET_GPR_U32(ctx, 31, 0x1189FCu);
    ctx->pc = 0x1189F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1189F4u;
    // 0x1189f8: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1189F4u, 0x1189FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1189FCu;
label_1189fc:
    // 0x1189fc: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1189fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x118a00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118a04: 0x86020ff0  lh          $v0, 0xFF0($s0)
    ctx->pc = 0x118a04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x118a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118a0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118a10: 0x3e00008  jr          $ra
    ctx->pc = 0x118A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A10u;
        // 0x118a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118A18u;
}
