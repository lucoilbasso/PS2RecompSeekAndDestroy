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

// Function: entry_001d5fac
// Address: 0x1d5fac - 0x1d5ff0
void entry_001d5fac_0x1d5fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5fac_0x1d5fac");
#endif

    ctx->pc = 0x1d5facu;

    // 0x1d5fac: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x1d5facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x1d5fb0: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5FB0u;
    {
        const bool branch_taken_0x1d5fb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FB0u;
        // 0x1d5fb4: 0x61823  negu        $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fb0) {
            ctx->pc = 0x1D6018u;
            return;
        }
    }
    ctx->pc = 0x1D5FB8u;
    // 0x1d5fb8: 0xd31004  sllv        $v0, $s3, $a2
    ctx->pc = 0x1d5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d5fbc: 0x671806  srlv        $v1, $a3, $v1
    ctx->pc = 0x1d5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d5fc0: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x1d5fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x1d5fc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d5fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d5fc8: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x1d5fc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1d5fcc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1d5fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5fd0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d5fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d5fd4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1d5fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1d5fd8: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x1d5fd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1d5fdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d5fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d5fe0: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1d5fe0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1d5fe4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5FE4u;
    {
        const bool branch_taken_0x1d5fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FE4u;
        // 0x1d5fe8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fe4) {
            ctx->pc = 0x1D5FF0u;
            return;
        }
    }
    ctx->pc = 0x1D5FECu;
    // 0x1d5fec: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x1d5fecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    ctx->pc = 0x1d5ff0u;
}
