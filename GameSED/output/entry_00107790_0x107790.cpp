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

// Function: entry_00107790
// Address: 0x107790 - 0x1077d0
void entry_00107790_0x107790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107790_0x107790");
#endif

    switch (ctx->pc) {
        case 0x1077acu: goto label_1077ac;
        default: break;
    }

    ctx->pc = 0x107790u;

    // 0x107790: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x107790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x107794: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x107794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x107798: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10779c: 0x50640013  beql        $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10779Cu;
    {
        const bool branch_taken_0x10779c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10779c) {
            ctx->pc = 0x1077A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10779Cu;
            // 0x1077a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1077ECu;
            return;
        }
    }
    ctx->pc = 0x1077A4u;
    // 0x1077a4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1077A4u;
    SET_GPR_U32(ctx, 31, 0x1077ACu);
    ctx->pc = 0x1077A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077A4u;
    // 0x1077a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1077A4u, 0x1077ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077ACu;
label_1077ac:
    // 0x1077ac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1077ACu;
    {
        const bool branch_taken_0x1077ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077ACu;
        // 0x1077b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077ac) {
            ctx->pc = 0x1077D0u;
            return;
        }
    }
    ctx->pc = 0x1077B4u;
    // 0x1077b4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1077b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1077b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1077b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1077bc: 0x9063bfc0  lbu         $v1, -0x4040($v1)
    ctx->pc = 0x1077bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950848)));
    // 0x1077c0: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1077c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1077c4: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x1077c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1077c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1077C8u;
    {
        const bool branch_taken_0x1077c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077C8u;
        // 0x1077cc: 0xa2230002  sb          $v1, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077c8) {
            ctx->pc = 0x1077E8u;
            return;
        }
    }
    ctx->pc = 0x1077D0u;
}
