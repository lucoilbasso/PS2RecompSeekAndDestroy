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

// Function: entry_00126b04
// Address: 0x126b04 - 0x126b78
void entry_00126b04_0x126b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126b04_0x126b04");
#endif

    switch (ctx->pc) {
        case 0x126b6cu: goto label_126b6c;
        default: break;
    }

    ctx->pc = 0x126b04u;

    // 0x126b04: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x126B04u;
    {
        const bool branch_taken_0x126b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b04) {
            ctx->pc = 0x126B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126B04u;
            // 0x126b08: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126C10u;
            return;
        }
    }
    ctx->pc = 0x126B0Cu;
    // 0x126b0c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x126b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b10: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x126b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x126b14: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x126b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x126b18: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x126b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x126b1c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x126b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x126b20: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x126b20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x126b24: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x126b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x126b28: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x126b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b2c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x126b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x126b30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x126b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x126b34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x126b34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b38: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x126b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x126b3c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x126b3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x126b40: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x126b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x126b44: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x126b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x126b48: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x126b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x126b4c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x126b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x126b50: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x126b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x126b54: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x126b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x126b58: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x126b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x126b5c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x126b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x126b60: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x126b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x126b64: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x126B64u;
    SET_GPR_U32(ctx, 31, 0x126B6Cu);
    ctx->pc = 0x126B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B64u;
    // 0x126b68: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x126B64u, 0x126B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B6Cu;
label_126b6c:
    // 0x126b6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x126b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x126b70: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x126b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x126b74: 0x0  nop
    ctx->pc = 0x126b74u;
    // NOP
    ctx->pc = 0x126b78u;
}
