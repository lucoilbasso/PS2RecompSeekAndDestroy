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

// Function: entry_001712bc
// Address: 0x1712bc - 0x171320
void entry_001712bc_0x1712bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001712bc_0x1712bc");
#endif

    switch (ctx->pc) {
        case 0x171318u: goto label_171318;
        default: break;
    }

    ctx->pc = 0x1712bcu;

    // 0x1712bc: 0x8e0a0030  lw          $t2, 0x30($s0)
    ctx->pc = 0x1712bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1712c0: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x1712c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x1712c4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1712c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1712c8: 0x8fad000c  lw          $t5, 0xC($sp)
    ctx->pc = 0x1712c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1712cc: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x1712ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1712d0: 0xcd2021  addu        $a0, $a2, $t5
    ctx->pc = 0x1712d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x1712d4: 0x28840400  slti        $a0, $a0, 0x400
    ctx->pc = 0x1712d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1712d8: 0x3810  mfhi        $a3
    ctx->pc = 0x1712d8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1712dc: 0xa74823  subu        $t1, $a1, $a3
    ctx->pc = 0x1712dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1712e0: 0x1474021  addu        $t0, $t2, $a3
    ctx->pc = 0x1712e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1712e4: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1712e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1712e8: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x1712e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x1712ec: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1712ECu;
    {
        const bool branch_taken_0x1712ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1712F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712ECu;
        // 0x1712f0: 0x695823  subu        $t3, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712ec) {
            ctx->pc = 0x171320u;
            return;
        }
    }
    ctx->pc = 0x1712F4u;
    // 0x1712f4: 0x12b1021  addu        $v0, $t1, $t3
    ctx->pc = 0x1712f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1712f8: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x1712f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1712fc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1712FCu;
    {
        const bool branch_taken_0x1712fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1712fc) {
            ctx->pc = 0x171300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1712FCu;
            // 0x171300: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171324u;
            return;
        }
    }
    ctx->pc = 0x171304u;
    // 0x171304: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x171304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171308: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x171308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17130c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17130cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171310: 0xc05c506  jal         func_171418
    ctx->pc = 0x171310u;
    SET_GPR_U32(ctx, 31, 0x171318u);
    ctx->pc = 0x171314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171310u;
    // 0x171314: 0x1a0382d  daddu       $a3, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171418u, 0x171310u, 0x171318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171318u;
label_171318:
    // 0x171318: 0x8e0c0038  lw          $t4, 0x38($s0)
    ctx->pc = 0x171318u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x17131c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17131cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171320u;
}
