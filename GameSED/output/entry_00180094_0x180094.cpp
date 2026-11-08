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

// Function: entry_00180094
// Address: 0x180094 - 0x1800c8
void entry_00180094_0x180094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180094_0x180094");
#endif

    ctx->pc = 0x180094u;

    // 0x180094: 0x94e2000a  lhu         $v0, 0xA($a3)
    ctx->pc = 0x180094u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x180098: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x180098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18009c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18009cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1800a0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1800a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1800a4: 0x1225821  addu        $t3, $t1, $v0
    ctx->pc = 0x1800a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1800a8: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1800a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1800ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1800acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1800b0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1800B0u;
    {
        const bool branch_taken_0x1800b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1800b0) {
            ctx->pc = 0x1800B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1800B0u;
            // 0x1800b4: 0xc5610004  lwc1        $f1, 0x4($t3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1800CCu;
            return;
        }
    }
    ctx->pc = 0x1800B8u;
    // 0x1800b8: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x1800b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1800bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1800bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1800c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1800C0u;
    {
        const bool branch_taken_0x1800c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1800c0) {
            ctx->pc = 0x1800C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1800C0u;
            // 0x1800c4: 0x358c0001  ori         $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1800C8u;
            return;
        }
    }
    ctx->pc = 0x1800C8u;
}
