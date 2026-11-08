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

// Function: entry_00128458
// Address: 0x128458 - 0x128498
void entry_00128458_0x128458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128458_0x128458");
#endif

    ctx->pc = 0x128458u;

    // 0x128458: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x128458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12845c: 0x1840010e  blez        $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x12845Cu;
    {
        const bool branch_taken_0x12845c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x128460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12845Cu;
        // 0x128460: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12845c) {
            ctx->pc = 0x128898u;
            return;
        }
    }
    ctx->pc = 0x128464u;
    // 0x128464: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x128464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x128468: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x128468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x12846c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12846cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x128470: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x128470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x128474: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x128474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128478: 0x244deb70  addiu       $t5, $v0, -0x1490
    ctx->pc = 0x128478u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x12847c: 0x246cebf0  addiu       $t4, $v1, -0x1410
    ctx->pc = 0x12847cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962160));
    // 0x128480: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x128480u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128484: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x128484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128488: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x128488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12848c: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x12848cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128490: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x128490u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128494: 0x27be0070  addiu       $fp, $sp, 0x70
    ctx->pc = 0x128494u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x128498u;
}
