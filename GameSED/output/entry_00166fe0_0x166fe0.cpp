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

// Function: entry_00166fe0
// Address: 0x166fe0 - 0x167038
void entry_00166fe0_0x166fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166fe0_0x166fe0");
#endif

    switch (ctx->pc) {
        case 0x16701cu: goto label_16701c;
        case 0x16702cu: goto label_16702c;
        case 0x167034u: goto label_167034;
        default: break;
    }

    ctx->pc = 0x166fe0u;

    // 0x166fe0: 0x8e701264  lw          $s0, 0x1264($s3)
    ctx->pc = 0x166fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4708)));
    // 0x166fe4: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x166FE4u;
    {
        const bool branch_taken_0x166fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x166fe4) {
            ctx->pc = 0x166FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166FE4u;
            // 0x166fe8: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167038u;
            return;
        }
    }
    ctx->pc = 0x166FECu;
    // 0x166fec: 0xc6010610  lwc1        $f1, 0x610($s0)
    ctx->pc = 0x166fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166ff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x166ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x166ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x166ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166ff8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x166ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166ffc: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x166FFCu;
    {
        const bool branch_taken_0x166ffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x166ffc) {
            ctx->pc = 0x167000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166FFCu;
            // 0x167000: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167038u;
            return;
        }
    }
    ctx->pc = 0x167004u;
    // 0x167004: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x167004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167008: 0x260305f0  addiu       $v1, $s0, 0x5F0
    ctx->pc = 0x167008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
    // 0x16700c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16700cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167010: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x167010u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x167014: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x167014u;
    SET_GPR_U32(ctx, 31, 0x16701Cu);
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x167014u, 0x16701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16701Cu;
label_16701c:
    // 0x16701c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16701cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167020: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x167020u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x167024: 0xc04c9d4  jal         func_132750
    ctx->pc = 0x167024u;
    SET_GPR_U32(ctx, 31, 0x16702Cu);
    ctx->pc = 0x167028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167024u;
    // 0x167028: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x132750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132750u, 0x167024u, 0x16702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16702Cu;
label_16702c:
    // 0x16702c: 0xc04ca08  jal         func_132820
    ctx->pc = 0x16702Cu;
    SET_GPR_U32(ctx, 31, 0x167034u);
    ctx->pc = 0x167030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16702Cu;
    // 0x167030: 0x92040575  lbu         $a0, 0x575($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132820u, 0x16702Cu, 0x167034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167034u;
label_167034:
    // 0x167034: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x167034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->pc = 0x167038u;
}
