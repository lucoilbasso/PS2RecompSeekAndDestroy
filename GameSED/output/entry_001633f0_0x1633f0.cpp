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

// Function: entry_001633f0
// Address: 0x1633f0 - 0x163420
void entry_001633f0_0x1633f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001633f0_0x1633f0");
#endif

    ctx->pc = 0x1633f0u;

    // 0x1633f0: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x1633f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1633f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1633f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1633f8: 0xae430158  sw          $v1, 0x158($s2)
    ctx->pc = 0x1633f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 3));
    // 0x1633fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1633fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163400: 0x50640028  beql        $v1, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x163400u;
    {
        const bool branch_taken_0x163400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x163400) {
            ctx->pc = 0x163404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163400u;
            // 0x163404: 0x8e440154  lw          $a0, 0x154($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1634A4u;
            return;
        }
    }
    ctx->pc = 0x163408u;
    // 0x163408: 0x2653016c  addiu       $s3, $s2, 0x16C
    ctx->pc = 0x163408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 364));
    // 0x16340c: 0x2656000c  addiu       $s6, $s2, 0xC
    ctx->pc = 0x16340cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x163410: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x163410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163414: 0x26150004  addiu       $s5, $s0, 0x4
    ctx->pc = 0x163414u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x163418: 0x3c1e8000  lui         $fp, 0x8000
    ctx->pc = 0x163418u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32768 << 16));
    // 0x16341c: 0x0  nop
    ctx->pc = 0x16341cu;
    // NOP
    ctx->pc = 0x163420u;
}
