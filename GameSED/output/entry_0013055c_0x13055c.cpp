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

// Function: entry_0013055c
// Address: 0x13055c - 0x130598
void entry_0013055c_0x13055c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013055c_0x13055c");
#endif

    ctx->pc = 0x13055cu;

    // 0x13055c: 0x2402006b  addiu       $v0, $zero, 0x6B
    ctx->pc = 0x13055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x130560: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x130560u;
    {
        const bool branch_taken_0x130560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x130560) {
            ctx->pc = 0x130564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130560u;
            // 0x130564: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1305DCu;
            return;
        }
    }
    ctx->pc = 0x130568u;
    // 0x130568: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x130568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x13056c: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x13056Cu;
    {
        const bool branch_taken_0x13056c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13056c) {
            ctx->pc = 0x130570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13056Cu;
            // 0x130570: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1305DCu;
            return;
        }
    }
    ctx->pc = 0x130574u;
    // 0x130574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130578: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x130578u;
    {
        const bool branch_taken_0x130578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130578u;
        // 0x13057c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130578) {
            ctx->pc = 0x1305D8u;
            return;
        }
    }
    ctx->pc = 0x130580u;
    // 0x130580: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x130580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x130584: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x130584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x130588: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x130588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13058c: 0x2442a298  addiu       $v0, $v0, -0x5D68
    ctx->pc = 0x13058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943384));
    // 0x130590: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x130590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130594: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x130594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x130598u;
}
