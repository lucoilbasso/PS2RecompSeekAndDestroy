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

// Function: entry_001658dc
// Address: 0x1658dc - 0x165918
void entry_001658dc_0x1658dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001658dc_0x1658dc");
#endif

    ctx->pc = 0x1658dcu;

    // 0x1658dc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1658dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1658e0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1658e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1658e4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1658e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1658e8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1658e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1658ec: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x1658ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
    // 0x1658f0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1658F0u;
    {
        const bool branch_taken_0x1658f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1658F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658F0u;
        // 0x1658f4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658f0) {
            ctx->pc = 0x1659BCu;
            return;
        }
    }
    ctx->pc = 0x1658F8u;
    // 0x1658f8: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1658F8u;
    {
        const bool branch_taken_0x1658f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1658FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658F8u;
        // 0x1658fc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658f8) {
            ctx->pc = 0x1659BCu;
            return;
        }
    }
    ctx->pc = 0x165900u;
    // 0x165900: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x165900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x165904: 0x265511b0  addiu       $s5, $s2, 0x11B0
    ctx->pc = 0x165904u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4528));
    // 0x165908: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x165908u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16590c: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x16590cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x165910: 0x265411a0  addiu       $s4, $s2, 0x11A0
    ctx->pc = 0x165910u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4512));
    // 0x165914: 0x265311c4  addiu       $s3, $s2, 0x11C4
    ctx->pc = 0x165914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4548));
    ctx->pc = 0x165918u;
}
