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

// Function: entry_00162ebc
// Address: 0x162ebc - 0x162f1c
void entry_00162ebc_0x162ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162ebc_0x162ebc");
#endif

    switch (ctx->pc) {
        case 0x162edcu: goto label_162edc;
        case 0x162f18u: goto label_162f18;
        default: break;
    }

    ctx->pc = 0x162ebcu;

label_162ebc:
    // 0x162ebc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x162ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_162ec0:
    // 0x162ec0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x162ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_162ec4:
    // 0x162ec4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x162ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_162ec8:
    // 0x162ec8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x162ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_162ecc:
    // 0x162ecc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x162eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_162ed0:
    // 0x162ed0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x162ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_162ed4:
    // 0x162ed4: 0xc04110c  jal         func_104430
label_162ed8:
    if (ctx->pc == 0x162ED8u) {
        ctx->pc = 0x162ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ED4u;
        // 0x162ed8: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162EDCu;
        goto label_162edc;
    }
    ctx->pc = 0x162ED4u;
    SET_GPR_U32(ctx, 31, 0x162EDCu);
    ctx->pc = 0x162ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162ED4u;
    // 0x162ed8: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x162ED4u, 0x162EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162EDCu;
label_162edc:
    // 0x162edc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x162edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162ee0:
    // 0x162ee0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x162ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_162ee4:
    // 0x162ee4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_162ee8:
    if (ctx->pc == 0x162EE8u) {
        ctx->pc = 0x162EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162EE4u;
        // 0x162ee8: 0x8e4201c0  lw          $v0, 0x1C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162EECu;
        goto label_162eec;
    }
    ctx->pc = 0x162EE4u;
    {
        const bool branch_taken_0x162ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162ee4) {
            ctx->pc = 0x162EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162EE4u;
            // 0x162ee8: 0x8e4201c0  lw          $v0, 0x1C0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162F1Cu;
            return;
        }
    }
    ctx->pc = 0x162EECu;
label_162eec:
    // 0x162eec: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x162eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_162ef0:
    // 0x162ef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162ef4:
    // 0x162ef4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x162ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_162ef8:
    // 0x162ef8: 0x8c830154  lw          $v1, 0x154($a0)
    ctx->pc = 0x162ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_162efc:
    // 0x162efc: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x162efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_162f00:
    // 0x162f00: 0x8c67009c  lw          $a3, 0x9C($v1)
    ctx->pc = 0x162f00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_162f04:
    // 0x162f04: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x162f04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_162f08:
    // 0x162f08: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x162f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_162f0c:
    // 0x162f0c: 0x8ce50018  lw          $a1, 0x18($a3)
    ctx->pc = 0x162f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_162f10:
    // 0x162f10: 0x60f809  jalr        $v1
label_162f14:
    if (ctx->pc == 0x162F14u) {
        ctx->pc = 0x162F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F10u;
        // 0x162f14: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F18u;
        goto label_162f18;
    }
    ctx->pc = 0x162F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162F18u);
        ctx->pc = 0x162F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F10u;
        // 0x162f14: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162F10u, 0x162F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162F18u;
label_162f18:
    // 0x162f18: 0x8e4201c0  lw          $v0, 0x1C0($s2)
    ctx->pc = 0x162f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    ctx->pc = 0x162f1cu;
}
