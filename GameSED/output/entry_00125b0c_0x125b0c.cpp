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

// Function: entry_00125b0c
// Address: 0x125b0c - 0x125ba0
void entry_00125b0c_0x125b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125b0c_0x125b0c");
#endif

    switch (ctx->pc) {
        case 0x125b78u: goto label_125b78;
        default: break;
    }

    ctx->pc = 0x125b0cu;

    // 0x125b0c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x125b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x125b10: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x125b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x125b14: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x125b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x125b18: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x125b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x125b1c: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x125b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x125b20: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x125b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x125b24: 0xe7b700b0  swc1        $f23, 0xB0($sp)
    ctx->pc = 0x125b24u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x125b28: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x125b28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x125b2c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x125b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x125b30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125b34: 0x8e4301b8  lw          $v1, 0x1B8($s2)
    ctx->pc = 0x125b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x125b38: 0x8cc70154  lw          $a3, 0x154($a2)
    ctx->pc = 0x125b38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x125b3c: 0x24622000  addiu       $v0, $v1, 0x2000
    ctx->pc = 0x125b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x125b40: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x125b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x125b44: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x125b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x125b48: 0x8ce60088  lw          $a2, 0x88($a3)
    ctx->pc = 0x125b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x125b4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x125b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x125b50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x125b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x125b54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x125b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x125b58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x125b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x125b5c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x125b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125b60: 0x8cc70048  lw          $a3, 0x48($a2)
    ctx->pc = 0x125b60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x125b64: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x125b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125b68: 0x46001542  mul.s       $f21, $f2, $f0
    ctx->pc = 0x125b68u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x125b6c: 0x8cf502f8  lw          $s5, 0x2F8($a3)
    ctx->pc = 0x125b6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 760)));
    // 0x125b70: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x125B70u;
    SET_GPR_U32(ctx, 31, 0x125B78u);
    ctx->pc = 0x125B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125B70u;
    // 0x125b74: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x125B70u, 0x125B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B78u;
label_125b78:
    // 0x125b78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b7c: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x125b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x125b80: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x125b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x125b84: 0x3404c350  ori         $a0, $zero, 0xC350
    ctx->pc = 0x125b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x125b88: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x125b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x125b8c: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x125b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x125b90: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x125b90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x125b94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x125B94u;
    {
        const bool branch_taken_0x125b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B94u;
        // 0x125b98: 0xae4201b8  sw          $v0, 0x1B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b94) {
            ctx->pc = 0x125BA0u;
            return;
        }
    }
    ctx->pc = 0x125B9Cu;
    // 0x125b9c: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x125b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
    ctx->pc = 0x125ba0u;
}
