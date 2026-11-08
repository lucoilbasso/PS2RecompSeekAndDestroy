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

// Function: entry_00168e90
// Address: 0x168e90 - 0x168ed0
void entry_00168e90_0x168e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168e90_0x168e90");
#endif

    ctx->pc = 0x168e90u;

    // 0x168e90: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x168e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x168e94: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x168e94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e98: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x168e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x168e9c: 0xafb60228  sw          $s6, 0x228($sp)
    ctx->pc = 0x168e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 22));
    // 0x168ea0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x168ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x168ea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x168ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168ea8: 0x8fb701e0  lw          $s7, 0x1E0($sp)
    ctx->pc = 0x168ea8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x168eac: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x168eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168eb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168eb4: 0xafb3022c  sw          $s3, 0x22C($sp)
    ctx->pc = 0x168eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 19));
    // 0x168eb8: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x168eb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168ebc: 0x18a0007d  blez        $a1, . + 4 + (0x7D << 2)
    ctx->pc = 0x168EBCu;
    {
        const bool branch_taken_0x168ebc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x168EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EBCu;
        // 0x168ec0: 0x249100c0  addiu       $s1, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ebc) {
            ctx->pc = 0x1690B4u;
            return;
        }
    }
    ctx->pc = 0x168EC4u;
    // 0x168ec4: 0xc794841c  lwc1        $f20, -0x7BE4($gp)
    ctx->pc = 0x168ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x168ec8: 0x27b601d0  addiu       $s6, $sp, 0x1D0
    ctx->pc = 0x168ec8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x168ecc: 0x0  nop
    ctx->pc = 0x168eccu;
    // NOP
    ctx->pc = 0x168ed0u;
}
