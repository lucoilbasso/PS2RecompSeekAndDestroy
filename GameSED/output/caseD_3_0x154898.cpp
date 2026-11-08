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

// Function: caseD_3
// Address: 0x154898 - 0x1548d8
void caseD_3_0x154898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x154898");
#endif

    switch (ctx->pc) {
        case 0x1548acu: goto label_1548ac;
        default: break;
    }

    ctx->pc = 0x154898u;

    // 0x154898: 0x8e100690  lw          $s0, 0x690($s0)
    ctx->pc = 0x154898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x15489c: 0x520002a0  beql        $s0, $zero, . + 4 + (0x2A0 << 2)
    ctx->pc = 0x15489Cu;
    {
        const bool branch_taken_0x15489c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15489c) {
            ctx->pc = 0x1548A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15489Cu;
            // 0x1548a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155320u;
            return;
        }
    }
    ctx->pc = 0x1548A4u;
    // 0x1548a4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1548A4u;
    SET_GPR_U32(ctx, 31, 0x1548ACu);
    ctx->pc = 0x1548A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548A4u;
    // 0x1548a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1548A4u, 0x1548ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548ACu;
label_1548ac:
    // 0x1548ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1548acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1548b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1548b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1548b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1548b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1548b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1548b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1548bc: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1548bcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1548c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1548c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1548c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1548c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1548c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1548c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1548cc: 0x80592b2  j           func_164AC8
    ctx->pc = 0x1548CCu;
    ctx->pc = 0x1548D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548CCu;
    // 0x1548d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AC8u;
    TankOptionDispChange__9ApcCqtanki_0x164ac8(rdram, ctx, runtime); return;
    ctx->pc = 0x1548D4u;
    // 0x1548d4: 0x0  nop
    ctx->pc = 0x1548d4u;
    // NOP
    ctx->pc = 0x1548d8u;
}
