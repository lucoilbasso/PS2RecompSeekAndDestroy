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

// Function: entry_00137e04
// Address: 0x137e04 - 0x137e54
void entry_00137e04_0x137e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e04_0x137e04");
#endif

    ctx->pc = 0x137e04u;

    // 0x137e04: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x137e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137e08: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x137e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x137e0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x137e0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x137e10: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x137e10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x137e14: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x137e14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137e18: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x137E18u;
    {
        const bool branch_taken_0x137e18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137e18) {
            ctx->pc = 0x137E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137E18u;
            // 0x137e1c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137E54u;
            return;
        }
    }
    ctx->pc = 0x137E20u;
    // 0x137e20: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x137e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x137e24: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x137e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137e28: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137E28u;
    {
        const bool branch_taken_0x137e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E28u;
        // 0x137e2c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e28) {
            ctx->pc = 0x137E54u;
            return;
        }
    }
    ctx->pc = 0x137E30u;
    // 0x137e30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x137e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137e34: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x137e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x137e38: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x137E38u;
    {
        const bool branch_taken_0x137e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x137e38) {
            ctx->pc = 0x137E54u;
            return;
        }
    }
    ctx->pc = 0x137E40u;
    // 0x137e40: 0xac720100  sw          $s2, 0x100($v1)
    ctx->pc = 0x137e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 18));
    // 0x137e44: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x137e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x137e48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137e4c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x137e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x137e50: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x137e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x137e54u;
}
