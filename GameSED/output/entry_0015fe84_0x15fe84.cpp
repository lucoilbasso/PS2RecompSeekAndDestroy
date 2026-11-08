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

// Function: entry_0015fe84
// Address: 0x15fe84 - 0x15fecc
void entry_0015fe84_0x15fe84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fe84_0x15fe84");
#endif

    ctx->pc = 0x15fe84u;

    // 0x15fe84: 0x70031868  pabsw       $v1, $v1
    ctx->pc = 0x15fe84u;
    SET_GPR_VEC(ctx, 3, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x15fe88: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x15fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x15fe8c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x15fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x15fe90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15fe94: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x15fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15fe98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15fe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe9c: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x15fe9cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15fea0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x15fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15fea4: 0x704310e8  pminw       $v0, $v0, $v1
    ctx->pc = 0x15fea4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x15fea8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x15fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15feac: 0x8e630f34  lw          $v1, 0xF34($s3)
    ctx->pc = 0x15feacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
    // 0x15feb0: 0x2a844000  slti        $a0, $s4, 0x4000
    ctx->pc = 0x15feb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x15feb4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15FEB4u;
    {
        const bool branch_taken_0x15feb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEB4u;
        // 0x15feb8: 0xa0620157  sb          $v0, 0x157($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 343), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15feb4) {
            ctx->pc = 0x15FECCu;
            return;
        }
    }
    ctx->pc = 0x15FEBCu;
    // 0x15febc: 0x8e620fbc  lw          $v0, 0xFBC($s3)
    ctx->pc = 0x15febcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
    // 0x15fec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fec4: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x15fec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x15fec8: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x15fec8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    ctx->pc = 0x15feccu;
}
