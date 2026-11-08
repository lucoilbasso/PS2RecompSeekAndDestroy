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

// Function: entry_00165bb0
// Address: 0x165bb0 - 0x165c28
void entry_00165bb0_0x165bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165bb0_0x165bb0");
#endif

    switch (ctx->pc) {
        case 0x165bd4u: goto label_165bd4;
        case 0x165c1cu: goto label_165c1c;
        default: break;
    }

    ctx->pc = 0x165bb0u;

    // 0x165bb0: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x165bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x165bb4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x165bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x165bb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x165bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x165bbc: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x165BBCu;
    {
        const bool branch_taken_0x165bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BBCu;
        // 0x165bc0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bbc) {
            ctx->pc = 0x165DC0u;
            return;
        }
    }
    ctx->pc = 0x165BC4u;
    // 0x165bc4: 0x8e240170  lw          $a0, 0x170($s1)
    ctx->pc = 0x165bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x165bc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x165bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165bcc: 0xc04e346  jal         func_138D18
    ctx->pc = 0x165BCCu;
    SET_GPR_U32(ctx, 31, 0x165BD4u);
    ctx->pc = 0x165BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BCCu;
    // 0x165bd0: 0x31160fff  andi        $s6, $t0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D18u, 0x165BCCu, 0x165BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BD4u;
label_165bd4:
    // 0x165bd4: 0x8e300170  lw          $s0, 0x170($s1)
    ctx->pc = 0x165bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x165bd8: 0x8f838b2c  lw          $v1, -0x74D4($gp)
    ctx->pc = 0x165bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x165bdc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x165bdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165be0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x165BE0u;
    {
        const bool branch_taken_0x165be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BE0u;
        // 0x165be4: 0x8e551264  lw          $s5, 0x1264($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165be0) {
            ctx->pc = 0x165C28u;
            return;
        }
    }
    ctx->pc = 0x165BE8u;
    // 0x165be8: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x165be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x165bec: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x165becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bf0: 0x8c63026c  lw          $v1, 0x26C($v1)
    ctx->pc = 0x165bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x165bf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x165bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x165bfc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x165bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c00: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x165c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c04: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x165c04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x165c0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c10: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x165c10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    // 0x165c14: 0xc055bb0  jal         func_156EC0
    ctx->pc = 0x165C14u;
    SET_GPR_U32(ctx, 31, 0x165C1Cu);
    ctx->pc = 0x165C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C14u;
    // 0x165c18: 0xaf838b2c  sw          $v1, -0x74D4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x165C14u, 0x165C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C1Cu;
label_165c1c:
    // 0x165c1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165c20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x165C20u;
    {
        const bool branch_taken_0x165c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C20u;
        // 0x165c24: 0xae22026c  sw          $v0, 0x26C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c20) {
            ctx->pc = 0x165C64u;
            return;
        }
    }
    ctx->pc = 0x165C28u;
}
