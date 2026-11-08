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

// Function: entry_001bf484
// Address: 0x1bf484 - 0x1bf4c4
void entry_001bf484_0x1bf484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf484_0x1bf484");
#endif

    switch (ctx->pc) {
        case 0x1bf4bcu: goto label_1bf4bc;
        default: break;
    }

    ctx->pc = 0x1bf484u;

    // 0x1bf484: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1bf484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1bf488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf48c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1bf48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1bf490: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf490u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf494: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bf494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bf498: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bf498u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf49c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf4a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4a4: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1bf4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1bf4a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf4b0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1bf4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf4b4: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF4B4u;
    SET_GPR_U32(ctx, 31, 0x1BF4BCu);
    ctx->pc = 0x1BF4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4B4u;
    // 0x1bf4b8: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF4B4u, 0x1BF4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4BCu;
label_1bf4bc:
    // 0x1bf4bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF4BCu;
    {
        const bool branch_taken_0x1bf4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4BCu;
        // 0x1bf4c0: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4bc) {
            ctx->pc = 0x1BF4D8u;
            return;
        }
    }
    ctx->pc = 0x1BF4C4u;
}
