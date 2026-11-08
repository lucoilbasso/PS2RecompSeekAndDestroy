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

// Function: entry_0014f744
// Address: 0x14f744 - 0x14f794
void entry_0014f744_0x14f744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f744_0x14f744");
#endif

    switch (ctx->pc) {
        case 0x14f77cu: goto label_14f77c;
        case 0x14f78cu: goto label_14f78c;
        default: break;
    }

    ctx->pc = 0x14f744u;

    // 0x14f744: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F744u;
    {
        const bool branch_taken_0x14f744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f744) {
            ctx->pc = 0x14F748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F744u;
            // 0x14f748: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F7A8u;
            return;
        }
    }
    ctx->pc = 0x14F74Cu;
    // 0x14f74c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x14f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x14f750: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14F750u;
    {
        const bool branch_taken_0x14f750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f750) {
            ctx->pc = 0x14F754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F750u;
            // 0x14f754: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F7A8u;
            return;
        }
    }
    ctx->pc = 0x14F758u;
    // 0x14f758: 0x8e02081c  lw          $v0, 0x81C($s0)
    ctx->pc = 0x14f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x14f75c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14F75Cu;
    {
        const bool branch_taken_0x14f75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F75Cu;
        // 0x14f760: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f75c) {
            ctx->pc = 0x14F7A0u;
            return;
        }
    }
    ctx->pc = 0x14F764u;
    // 0x14f764: 0x8e020818  lw          $v0, 0x818($s0)
    ctx->pc = 0x14f764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
    // 0x14f768: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14F768u;
    {
        const bool branch_taken_0x14f768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f768) {
            ctx->pc = 0x14F794u;
            return;
        }
    }
    ctx->pc = 0x14F770u;
    // 0x14f770: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14f770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f774: 0xc053d7c  jal         func_14F5F0
    ctx->pc = 0x14F774u;
    SET_GPR_U32(ctx, 31, 0x14F77Cu);
    ctx->pc = 0x14F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F774u;
    // 0x14f778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F5F0u, 0x14F774u, 0x14F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F77Cu;
label_14f77c:
    // 0x14f77c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F77Cu;
    {
        const bool branch_taken_0x14f77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F77Cu;
        // 0x14f780: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f77c) {
            ctx->pc = 0x14F794u;
            return;
        }
    }
    ctx->pc = 0x14F784u;
    // 0x14f784: 0xc055694  jal         func_155A50
    ctx->pc = 0x14F784u;
    SET_GPR_U32(ctx, 31, 0x14F78Cu);
    ctx->pc = 0x14F788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F784u;
    // 0x14f788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A50u, 0x14F784u, 0x14F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F78Cu;
label_14f78c:
    // 0x14f78c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14f790: 0xae020818  sw          $v0, 0x818($s0)
    ctx->pc = 0x14f790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
    ctx->pc = 0x14f794u;
}
