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

// Function: entry_0015ece4
// Address: 0x15ece4 - 0x15ed3c
void entry_0015ece4_0x15ece4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ece4_0x15ece4");
#endif

    ctx->pc = 0x15ece4u;

    // 0x15ece4: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x15ece4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x15ece8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ece8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ecec: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x15ececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15ecf0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x15ecf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x15ecf4: 0xaea50f24  sw          $a1, 0xF24($s5)
    ctx->pc = 0x15ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3876), GPR_U32(ctx, 5));
    // 0x15ecf8: 0x0  nop
    ctx->pc = 0x15ecf8u;
    // NOP
    // 0x15ecfc: 0x0  nop
    ctx->pc = 0x15ecfcu;
    // NOP
    // 0x15ed00: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x15ed00u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x15ed04: 0xaea30f20  sw          $v1, 0xF20($s5)
    ctx->pc = 0x15ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3872), GPR_U32(ctx, 3));
    // 0x15ed08: 0x1040030d  beqz        $v0, . + 4 + (0x30D << 2)
    ctx->pc = 0x15ED08u;
    {
        const bool branch_taken_0x15ed08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED08u;
        // 0x15ed0c: 0xe6a00fc4  swc1        $f0, 0xFC4($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed08) {
            ctx->pc = 0x15F940u;
            return;
        }
    }
    ctx->pc = 0x15ED10u;
    // 0x15ed10: 0x96a20014  lhu         $v0, 0x14($s5)
    ctx->pc = 0x15ed10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x15ed14: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x15ed14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x15ed18: 0x5040030a  beql        $v0, $zero, . + 4 + (0x30A << 2)
    ctx->pc = 0x15ED18u;
    {
        const bool branch_taken_0x15ed18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ed18) {
            ctx->pc = 0x15ED1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15ED18u;
            // 0x15ed1c: 0x96a20014  lhu         $v0, 0x14($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F944u;
            return;
        }
    }
    ctx->pc = 0x15ED20u;
    // 0x15ed20: 0x96a2001e  lhu         $v0, 0x1E($s5)
    ctx->pc = 0x15ed20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x15ed24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15ED24u;
    {
        const bool branch_taken_0x15ed24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED24u;
        // 0x15ed28: 0x24026000  addiu       $v0, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed24) {
            ctx->pc = 0x15ED3Cu;
            return;
        }
    }
    ctx->pc = 0x15ED2Cu;
    // 0x15ed2c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x15ed2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x15ed30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ed30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ed34: 0xaea20fc8  sw          $v0, 0xFC8($s5)
    ctx->pc = 0x15ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4040), GPR_U32(ctx, 2));
    // 0x15ed38: 0xe6a00fcc  swc1        $f0, 0xFCC($s5)
    ctx->pc = 0x15ed38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4044), bits); }
    ctx->pc = 0x15ed3cu;
}
