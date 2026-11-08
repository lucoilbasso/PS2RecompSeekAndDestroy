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

// Function: entry_001b8dac
// Address: 0x1b8dac - 0x1b8e0c
void entry_001b8dac_0x1b8dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8dac_0x1b8dac");
#endif

    ctx->pc = 0x1b8dacu;

    // 0x1b8dac: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1b8dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1b8db0: 0x72673818  mult1       $a3, $s3, $a3
    ctx->pc = 0x1b8db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1b8db4: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1b8db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b8db8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b8dbc: 0x122940  sll         $a1, $s2, 5
    ctx->pc = 0x1b8dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1b8dc0: 0x2442d500  addiu       $v0, $v0, -0x2B00
    ctx->pc = 0x1b8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956288));
    // 0x1b8dc4: 0x27c4d410  addiu       $a0, $fp, -0x2BF0
    ctx->pc = 0x1b8dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956048));
    // 0x1b8dc8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b8dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b8dcc: 0x1331c0  sll         $a2, $s3, 7
    ctx->pc = 0x1b8dccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x1b8dd0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1b8dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1b8dd4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1b8dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b8dd8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1b8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b8ddc: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x1b8ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b8de0: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x1b8de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x1b8de4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b8de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8de8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b8de8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8dec: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1b8decu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1b8df0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1b8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b8df4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1b8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1b8df8: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x1b8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x1b8dfc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b8dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e00: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1b8e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x1b8e04: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1b8e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1b8e08: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1b8e0cu;
}
