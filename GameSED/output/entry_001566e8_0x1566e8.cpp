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

// Function: entry_001566e8
// Address: 0x1566e8 - 0x156714
void entry_001566e8_0x1566e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001566e8_0x1566e8");
#endif

    ctx->pc = 0x1566e8u;

    // 0x1566e8: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1566e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1566ec: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1566ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1566f0: 0x70003830  pmfhl.lw    $a3
    ctx->pc = 0x1566f0u;
    SET_GPR_VEC(ctx, 7, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x1566f4: 0x73bfb  dsra        $a3, $a3, 15
    ctx->pc = 0x1566f4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> 15);
    // 0x1566f8: 0x28e300fa  slti        $v1, $a3, 0xFA
    ctx->pc = 0x1566f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x1566fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1566fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156700: 0x16840004  bne         $s4, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156700u;
    {
        const bool branch_taken_0x156700 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x156704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156700u;
        // 0x156704: 0x43380a  movz        $a3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156700) {
            ctx->pc = 0x156714u;
            return;
        }
    }
    ctx->pc = 0x156708u;
    // 0x156708: 0x71883  sra         $v1, $a3, 2
    ctx->pc = 0x156708u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 2));
    // 0x15670c: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x15670cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
    // 0x156710: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x156710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x156714u;
}
