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

// Function: entry_00137bf4
// Address: 0x137bf4 - 0x137c38
void entry_00137bf4_0x137bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137bf4_0x137bf4");
#endif

    switch (ctx->pc) {
        case 0x137c18u: goto label_137c18;
        default: break;
    }

    ctx->pc = 0x137bf4u;

    // 0x137bf4: 0x250300e0  addiu       $v1, $t0, 0xE0
    ctx->pc = 0x137bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
    // 0x137bf8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x137bf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x137bfc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x137bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x137c00: 0x3c01c1f0  lui         $at, 0xC1F0
    ctx->pc = 0x137c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49648 << 16));
    // 0x137c04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x137c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x137c08: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x137c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c0c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x137c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c10: 0xc04dbd2  jal         func_136F48
    ctx->pc = 0x137C10u;
    SET_GPR_U32(ctx, 31, 0x137C18u);
    ctx->pc = 0x137C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C10u;
    // 0x137c14: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x137C10u, 0x137C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C18u;
label_137c18:
    // 0x137c18: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x137C18u;
    {
        const bool branch_taken_0x137c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C18u;
        // 0x137c1c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c18) {
            ctx->pc = 0x137C5Cu;
            return;
        }
    }
    ctx->pc = 0x137C20u;
    // 0x137c20: 0x2443bc50  addiu       $v1, $v0, -0x43B0
    ctx->pc = 0x137c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949968));
    // 0x137c24: 0x8c620400  lw          $v0, 0x400($v1)
    ctx->pc = 0x137c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1024)));
    // 0x137c28: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x137C28u;
    {
        const bool branch_taken_0x137c28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x137C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C28u;
        // 0x137c2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c28) {
            ctx->pc = 0x137C5Cu;
            return;
        }
    }
    ctx->pc = 0x137C30u;
    // 0x137c30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x137c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c34: 0x0  nop
    ctx->pc = 0x137c34u;
    // NOP
    ctx->pc = 0x137c38u;
}
