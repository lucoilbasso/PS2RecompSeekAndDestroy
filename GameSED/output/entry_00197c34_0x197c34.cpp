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

// Function: entry_00197c34
// Address: 0x197c34 - 0x197cac
void entry_00197c34_0x197c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197c34_0x197c34");
#endif

    ctx->pc = 0x197c34u;

    // 0x197c34: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x197c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c38: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x197c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x197c3c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x197c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x197c40: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x197c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c44: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x197c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x197c48: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x197c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x197c4c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x197c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x197c50: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x197c50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x197c54: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x197c54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x197c58: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x197c58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32769);
    // 0x197c5c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x197c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x197c60: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x197c60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x197c64: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x197c64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x197c68: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x197c68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x197c6c: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x197c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x197c70: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x197c70u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x197c74: 0xfd000000  sd          $zero, 0x0($t0)
    ctx->pc = 0x197c74u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 0));
    // 0x197c78: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x197c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x197c7c: 0x1131023  subu        $v0, $t0, $s3
    ctx->pc = 0x197c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x197c80: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x197c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x197c84: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x197c84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x197c88: 0x28420041  slti        $v0, $v0, 0x41
    ctx->pc = 0x197c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x197c8c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x197c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x197c90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x197C90u;
    {
        const bool branch_taken_0x197c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C90u;
        // 0x197c94: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c90) {
            ctx->pc = 0x197CACu;
            return;
        }
    }
    ctx->pc = 0x197C98u;
    // 0x197c98: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x197c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x197c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ca0: 0x24a583d0  addiu       $a1, $a1, -0x7C30
    ctx->pc = 0x197ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935504));
    // 0x197ca4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x197CA4u;
    SET_GPR_U32(ctx, 31, 0x197CACu);
    ctx->pc = 0x197CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197CA4u;
    // 0x197ca8: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x197CA4u, 0x197CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CACu;
}
