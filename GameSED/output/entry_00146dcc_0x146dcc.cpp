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

// Function: entry_00146dcc
// Address: 0x146dcc - 0x146e0c
void entry_00146dcc_0x146dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146dcc_0x146dcc");
#endif

    ctx->pc = 0x146dccu;

    // 0x146dcc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x146dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x146dd0: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x146dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x146dd4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x146dd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x146dd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x146dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x146ddc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x146DDCu;
    {
        const bool branch_taken_0x146ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DDCu;
        // 0x146de0: 0x38630003  xori        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ddc) {
            ctx->pc = 0x146E0Cu;
            return;
        }
    }
    ctx->pc = 0x146DE4u;
    // 0x146de4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x146DE4u;
    {
        const bool branch_taken_0x146de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146de4) {
            ctx->pc = 0x146DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146DE4u;
            // 0x146de8: 0xc4e1fff8  lwc1        $f1, -0x8($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x146E10u;
            return;
        }
    }
    ctx->pc = 0x146DECu;
    // 0x146dec: 0x93a300c3  lbu         $v1, 0xC3($sp)
    ctx->pc = 0x146decu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 195)));
    // 0x146df0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x146df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x146df4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x146df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x146df8: 0x8c420210  lw          $v0, 0x210($v0)
    ctx->pc = 0x146df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x146dfc: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x146dfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x146e00: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x146e00u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x146e04: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x146e04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x146e08: 0xa3a300c3  sb          $v1, 0xC3($sp)
    ctx->pc = 0x146e08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x146e0cu;
}
