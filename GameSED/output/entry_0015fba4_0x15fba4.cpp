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

// Function: entry_0015fba4
// Address: 0x15fba4 - 0x15fc00
void entry_0015fba4_0x15fba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fba4_0x15fba4");
#endif

    switch (ctx->pc) {
        case 0x15fbb0u: goto label_15fbb0;
        default: break;
    }

    ctx->pc = 0x15fba4u;

    // 0x15fba4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15fba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fba8: 0xc061372  jal         func_184DC8
    ctx->pc = 0x15FBA8u;
    SET_GPR_U32(ctx, 31, 0x15FBB0u);
    ctx->pc = 0x15FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FBA8u;
    // 0x15fbac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x15FBA8u, 0x15FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FBB0u;
label_15fbb0:
    // 0x15fbb0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x15fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x15fbb4: 0x8e640fbc  lw          $a0, 0xFBC($s3)
    ctx->pc = 0x15fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
    // 0x15fbb8: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x15fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x15fbbc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15fbc0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15fbc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15fbc4: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x15fbc4u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x15fbc8: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x15fbc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x15fbcc: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x15fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x15fbd0: 0x705210c8  pmaxw       $v0, $v0, $s2
    ctx->pc = 0x15fbd0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 18)));
    // 0x15fbd4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x15fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15fbd8: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15fbd8u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15fbdc: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x15fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15fbe0: 0x8e640f34  lw          $a0, 0xF34($s3)
    ctx->pc = 0x15fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
    // 0x15fbe4: 0xa0820157  sb          $v0, 0x157($a0)
    ctx->pc = 0x15fbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 343), (uint8_t)GPR_U32(ctx, 2));
    // 0x15fbe8: 0x8e630fbc  lw          $v1, 0xFBC($s3)
    ctx->pc = 0x15fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
    // 0x15fbec: 0x74182a  slt         $v1, $v1, $s4
    ctx->pc = 0x15fbecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x15fbf0: 0x546000b6  bnel        $v1, $zero, . + 4 + (0xB6 << 2)
    ctx->pc = 0x15FBF0u;
    {
        const bool branch_taken_0x15fbf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fbf0) {
            ctx->pc = 0x15FBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FBF0u;
            // 0x15fbf4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FECCu;
            return;
        }
    }
    ctx->pc = 0x15FBF8u;
    // 0x15fbf8: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x15FBF8u;
    {
        const bool branch_taken_0x15fbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fbf8) {
            ctx->pc = 0x15FECCu;
            return;
        }
    }
    ctx->pc = 0x15FC00u;
}
