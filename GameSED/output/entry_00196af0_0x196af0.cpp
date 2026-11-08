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

// Function: entry_00196af0
// Address: 0x196af0 - 0x196b48
void entry_00196af0_0x196af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196af0_0x196af0");
#endif

    ctx->pc = 0x196af0u;

    // 0x196af0: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x196af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x196af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196af8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x196af8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196afc: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x196afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x196b00: 0x2443fff4  addiu       $v1, $v0, -0xC
    ctx->pc = 0x196b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x196b04: 0x2447fffe  addiu       $a3, $v0, -0x2
    ctx->pc = 0x196b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x196b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x196b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196b0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196b10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x196b14: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x196b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x196b18: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x196B18u;
    {
        const bool branch_taken_0x196b18 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x196B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B18u;
        // 0x196b1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b18) {
            ctx->pc = 0x196B48u;
            return;
        }
    }
    ctx->pc = 0x196B20u;
    // 0x196b20: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x196b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x196b24: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x196b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x196b28: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x196b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x196b2c: 0x451007  srav        $v0, $a1, $v0
    ctx->pc = 0x196b2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x196b30: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x196b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x196b34: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x196b34u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x196b38: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x196b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x196b3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x196B3Cu;
    {
        const bool branch_taken_0x196b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B3Cu;
        // 0x196b40: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b3c) {
            ctx->pc = 0x196B50u;
            return;
        }
    }
    ctx->pc = 0x196B44u;
    // 0x196b44: 0x0  nop
    ctx->pc = 0x196b44u;
    // NOP
    ctx->pc = 0x196b48u;
}
