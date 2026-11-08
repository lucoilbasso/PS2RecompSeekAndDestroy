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

// Function: entry_00110abc
// Address: 0x110abc - 0x110af8
void entry_00110abc_0x110abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110abc_0x110abc");
#endif

    switch (ctx->pc) {
        case 0x110af4u: goto label_110af4;
        default: break;
    }

    ctx->pc = 0x110abcu;

    // 0x110abc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110ac0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x110ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ac4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x110ac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110ac8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x110ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x110acc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x110ad0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x110ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x110ad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x110ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110ad8: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110AD8u;
    {
        const bool branch_taken_0x110ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x110ad8) {
            ctx->pc = 0x110AF8u;
            return;
        }
    }
    ctx->pc = 0x110AE0u;
    // 0x110ae0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x110ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x110ae4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x110ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x110ae8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x110ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110aec: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x110AECu;
    SET_GPR_U32(ctx, 31, 0x110AF4u);
    ctx->pc = 0x110AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110AECu;
    // 0x110af0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x110AECu, 0x110AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110AF4u;
label_110af4:
    // 0x110af4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x110af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110af8u;
}
