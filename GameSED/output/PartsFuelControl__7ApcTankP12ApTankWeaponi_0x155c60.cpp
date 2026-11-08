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

// Function: PartsFuelControl__7ApcTankP12ApTankWeaponi
// Address: 0x155c60 - 0x155cec
void PartsFuelControl__7ApcTankP12ApTankWeaponi_0x155c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsFuelControl__7ApcTankP12ApTankWeaponi_0x155c60");
#endif

    ctx->pc = 0x155c60u;

    // 0x155c60: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x155c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x155c64: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x155c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x155c68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155C68u;
    {
        const bool branch_taken_0x155c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C68u;
        // 0x155c6c: 0x24a40030  addiu       $a0, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c68) {
            ctx->pc = 0x155C78u;
            goto label_155c78;
        }
    }
    ctx->pc = 0x155C70u;
    // 0x155c70: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x155C70u;
    {
        const bool branch_taken_0x155c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C70u;
        // 0x155c74: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c70) {
            ctx->pc = 0x155CE4u;
            goto label_155ce4;
        }
    }
    ctx->pc = 0x155C78u;
label_155c78:
    // 0x155c78: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x155c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x155c7c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x155C7Cu;
    {
        const bool branch_taken_0x155c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155c7c) {
            ctx->pc = 0x155CE4u;
            goto label_155ce4;
        }
    }
    ctx->pc = 0x155C84u;
    // 0x155c84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x155c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155c88: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x155C88u;
    {
        const bool branch_taken_0x155c88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x155c88) {
            ctx->pc = 0x155C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155C88u;
            // 0x155c8c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155CACu;
            goto label_155cac;
        }
    }
    ctx->pc = 0x155C90u;
    // 0x155c90: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x155C90u;
    {
        const bool branch_taken_0x155c90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C90u;
        // 0x155c94: 0x24030096  addiu       $v1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c90) {
            ctx->pc = 0x155CA8u;
            goto label_155ca8;
        }
    }
    ctx->pc = 0x155C98u;
    // 0x155c98: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x155c98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x155c9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x155c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155ca0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x155ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x155ca4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x155ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_155ca8:
    // 0x155ca8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x155ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_155cac:
    // 0x155cac: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x155cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x155cb0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x155cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155cb4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x155CB4u;
    {
        const bool branch_taken_0x155cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CB4u;
        // 0x155cb8: 0x3300a  movz        $a2, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cb4) {
            ctx->pc = 0x155CE4u;
            goto label_155ce4;
        }
    }
    ctx->pc = 0x155CBCu;
    // 0x155cbc: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x155cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x155cc0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x155CC0u;
    {
        const bool branch_taken_0x155cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155cc0) {
            ctx->pc = 0x155CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155CC0u;
            // 0x155cc4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155CE0u;
            goto label_155ce0;
        }
    }
    ctx->pc = 0x155CC8u;
    // 0x155cc8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x155cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155ccc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x155cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x155cd0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x155cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x155cd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x155CD4u;
    {
        const bool branch_taken_0x155cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CD4u;
        // 0x155cd8: 0xaca3003c  sw          $v1, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cd4) {
            ctx->pc = 0x155CE4u;
            goto label_155ce4;
        }
    }
    ctx->pc = 0x155CDCu;
    // 0x155cdc: 0x0  nop
    ctx->pc = 0x155cdcu;
    // NOP
label_155ce0:
    // 0x155ce0: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x155ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
label_155ce4:
    // 0x155ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x155CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CE4u;
        // 0x155ce8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155CECu;
}
