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

// Function: entry_00121bf4
// Address: 0x121bf4 - 0x121c58
void entry_00121bf4_0x121bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121bf4_0x121bf4");
#endif

    ctx->pc = 0x121bf4u;

    // 0x121bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x121bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x121bf8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121bfc: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x121bfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x121c00: 0x94c3001e  lhu         $v1, 0x1E($a2)
    ctx->pc = 0x121c00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 30)));
    // 0x121c04: 0x10640152  beq         $v1, $a0, . + 4 + (0x152 << 2)
    ctx->pc = 0x121C04u;
    {
        const bool branch_taken_0x121c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x121C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C04u;
        // 0x121c08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c04) {
            ctx->pc = 0x122150u;
            return;
        }
    }
    ctx->pc = 0x121C0Cu;
    // 0x121c0c: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x121c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x121c10: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x121C10u;
    {
        const bool branch_taken_0x121c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C10u;
        // 0x121c14: 0x8cd10018  lw          $s1, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c10) {
            ctx->pc = 0x121D24u;
            return;
        }
    }
    ctx->pc = 0x121C18u;
    // 0x121c18: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x121c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x121c1c: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x121C1Cu;
    {
        const bool branch_taken_0x121c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c1c) {
            ctx->pc = 0x121C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121C1Cu;
            // 0x121c20: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121D28u;
            return;
        }
    }
    ctx->pc = 0x121C24u;
    // 0x121c24: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x121c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121c28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121c2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x121c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121c30: 0x4502003d  bc1fl       . + 4 + (0x3D << 2)
    ctx->pc = 0x121C30u;
    {
        const bool branch_taken_0x121c30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121c30) {
            ctx->pc = 0x121C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121C30u;
            // 0x121c34: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121D28u;
            return;
        }
    }
    ctx->pc = 0x121C38u;
    // 0x121c38: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x121c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x121c3c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121C3Cu;
    {
        const bool branch_taken_0x121c3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x121C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C3Cu;
        // 0x121c40: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c3c) {
            ctx->pc = 0x121C58u;
            return;
        }
    }
    ctx->pc = 0x121C44u;
    // 0x121c44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121c48: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121c4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x121C4Cu;
    {
        const bool branch_taken_0x121c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c4c) {
            ctx->pc = 0x121C6Cu;
            return;
        }
    }
    ctx->pc = 0x121C54u;
    // 0x121c54: 0x0  nop
    ctx->pc = 0x121c54u;
    // NOP
    ctx->pc = 0x121c58u;
}
