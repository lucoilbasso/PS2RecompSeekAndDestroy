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

// Function: entry_00134968
// Address: 0x134968 - 0x1349d8
void entry_00134968_0x134968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134968_0x134968");
#endif

    switch (ctx->pc) {
        case 0x1349a4u: goto label_1349a4;
        default: break;
    }

    ctx->pc = 0x134968u;

label_134968:
    // 0x134968: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x134968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_13496c:
    // 0x13496c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13496cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_134970:
    // 0x134970: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x134970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_134974:
    // 0x134974: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x134974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_134978:
    // 0x134978: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x134978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_13497c:
    // 0x13497c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x13497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_134980:
    // 0x134980: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x134980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_134984:
    // 0x134984: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x134984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_134988:
    // 0x134988: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x134988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_13498c:
    // 0x13498c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x13498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_134990:
    // 0x134990: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x134990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_134994:
    // 0x134994: 0x8c740040  lw          $s4, 0x40($v1)
    ctx->pc = 0x134994u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_134998:
    // 0x134998: 0x8cb10044  lw          $s1, 0x44($a1)
    ctx->pc = 0x134998u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_13499c:
    // 0x13499c: 0xc06a26e  jal         func_1A89B8
label_1349a0:
    if (ctx->pc == 0x1349A0u) {
        ctx->pc = 0x1349A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13499Cu;
        // 0x1349a0: 0x8670000e  lh          $s0, 0xE($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1349A4u;
        goto label_1349a4;
    }
    ctx->pc = 0x13499Cu;
    SET_GPR_U32(ctx, 31, 0x1349A4u);
    ctx->pc = 0x1349A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13499Cu;
    // 0x1349a0: 0x8670000e  lh          $s0, 0xE($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13499Cu, 0x1349A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349A4u;
label_1349a4:
    // 0x1349a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1349a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1349a8:
    // 0x1349a8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1349a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1349ac:
    // 0x1349ac: 0x2ca3000f  sltiu       $v1, $a1, 0xF
    ctx->pc = 0x1349acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1349b0:
    // 0x1349b0: 0xae900070  sw          $s0, 0x70($s4)
    ctx->pc = 0x1349b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 16));
label_1349b4:
    // 0x1349b4: 0x10600123  beqz        $v1, . + 4 + (0x123 << 2)
label_1349b8:
    if (ctx->pc == 0x1349B8u) {
        ctx->pc = 0x1349B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349B4u;
        // 0x1349b8: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1349BCu;
        goto label_1349bc;
    }
    ctx->pc = 0x1349B4u;
    {
        const bool branch_taken_0x1349b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349B4u;
        // 0x1349b8: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349b4) {
            ctx->pc = 0x134E44u;
            return;
        }
    }
    ctx->pc = 0x1349BCu;
label_1349bc:
    // 0x1349bc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1349bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1349c0:
    // 0x1349c0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1349c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1349c4:
    // 0x1349c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1349c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1349c8:
    // 0x1349c8: 0x8c636540  lw          $v1, 0x6540($v1)
    ctx->pc = 0x1349c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25920)));
label_1349cc:
    // 0x1349cc: 0x600008  jr          $v1
label_1349d0:
    if (ctx->pc == 0x1349D0u) {
        ctx->pc = 0x1349D4u;
        goto label_1349d4;
    }
    ctx->pc = 0x1349CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1349CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1349D4u;
label_1349d4:
    // 0x1349d4: 0x0  nop
    ctx->pc = 0x1349d4u;
    // NOP
    ctx->pc = 0x1349d8u;
}
