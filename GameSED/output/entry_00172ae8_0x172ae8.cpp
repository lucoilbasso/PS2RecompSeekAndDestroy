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

// Function: entry_00172ae8
// Address: 0x172ae8 - 0x172b80
void entry_00172ae8_0x172ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172ae8_0x172ae8");
#endif

    switch (ctx->pc) {
        case 0x172b20u: goto label_172b20;
        case 0x172b64u: goto label_172b64;
        default: break;
    }

    ctx->pc = 0x172ae8u;

    // 0x172ae8: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x172ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x172aec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x172aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172af0: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x172af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x172af4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172af8: 0x3c48021  addu        $s0, $fp, $a0
    ctx->pc = 0x172af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x172afc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b00: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172b04: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172b08: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172b08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172b0c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172b10: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172b14: 0x24e70063  addiu       $a3, $a3, 0x63
    ctx->pc = 0x172b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 99));
    // 0x172b18: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172B18u;
    SET_GPR_U32(ctx, 31, 0x172B20u);
    ctx->pc = 0x172B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B18u;
    // 0x172b1c: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172B18u, 0x172B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B20u;
label_172b20:
    // 0x172b20: 0x2771818  mult        $v1, $s3, $s7
    ctx->pc = 0x172b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x172b24: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172b28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b2c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172b30: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172b34: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172b34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172b38: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x172b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x172b3c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x172b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172b40: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x172b40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x172b44: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x172b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x172b48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x172b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172b4c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x172b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x172b50: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x172b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x172b54: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x172b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x172b58: 0x24e70023  addiu       $a3, $a3, 0x23
    ctx->pc = 0x172b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 35));
    // 0x172b5c: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172B5Cu;
    SET_GPR_U32(ctx, 31, 0x172B64u);
    ctx->pc = 0x172B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B5Cu;
    // 0x172b60: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172B5Cu, 0x172B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B64u;
label_172b64:
    // 0x172b64: 0x5ac00006  blezl       $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x172B64u;
    {
        const bool branch_taken_0x172b64 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x172b64) {
            ctx->pc = 0x172B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172B64u;
            // 0x172b68: 0x26b10100  addiu       $s1, $s5, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172B80u;
            return;
        }
    }
    ctx->pc = 0x172B6Cu;
    // 0x172b6c: 0x26b1ffb0  addiu       $s1, $s5, -0x50
    ctx->pc = 0x172b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967216));
    // 0x172b70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172B74u;
    {
        const bool branch_taken_0x172b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B74u;
        // 0x172b78: 0x26b40100  addiu       $s4, $s5, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b74) {
            ctx->pc = 0x172B88u;
            return;
        }
    }
    ctx->pc = 0x172B7Cu;
    // 0x172b7c: 0x0  nop
    ctx->pc = 0x172b7cu;
    // NOP
    ctx->pc = 0x172b80u;
}
