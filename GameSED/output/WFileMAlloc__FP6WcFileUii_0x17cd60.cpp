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

// Function: WFileMAlloc__FP6WcFileUii
// Address: 0x17cd60 - 0x17ce64
void WFileMAlloc__FP6WcFileUii_0x17cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WFileMAlloc__FP6WcFileUii_0x17cd60");
#endif

    switch (ctx->pc) {
        case 0x17cd90u: goto label_17cd90;
        case 0x17cdb0u: goto label_17cdb0;
        case 0x17cdd0u: goto label_17cdd0;
        case 0x17cdf0u: goto label_17cdf0;
        case 0x17ce10u: goto label_17ce10;
        case 0x17ce30u: goto label_17ce30;
        case 0x17ce4cu: goto label_17ce4c;
        default: break;
    }

    ctx->pc = 0x17cd60u;

    // 0x17cd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17cd64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cd68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17cd68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17cd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17cd70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17cd70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd74: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x17CD74u;
    {
        const bool branch_taken_0x17cd74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD74u;
        // 0x17cd78: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd74) {
            ctx->pc = 0x17CD98u;
            goto label_17cd98;
        }
    }
    ctx->pc = 0x17CD7Cu;
    // 0x17cd7c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CD7Cu;
    {
        const bool branch_taken_0x17cd7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD7Cu;
        // 0x17cd80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd7c) {
            ctx->pc = 0x17CD88u;
            goto label_17cd88;
        }
    }
    ctx->pc = 0x17CD84u;
    // 0x17cd84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17cd88:
    // 0x17cd88: 0xc0680c8  jal         func_1A0320
    ctx->pc = 0x17CD88u;
    SET_GPR_U32(ctx, 31, 0x17CD90u);
    ctx->pc = 0x17CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD88u;
    // 0x17cd8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0320u, 0x17CD88u, 0x17CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD90u;
label_17cd90:
    // 0x17cd90: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x17CD90u;
    {
        const bool branch_taken_0x17cd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cd90) {
            ctx->pc = 0x17CD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CD90u;
            // 0x17cd94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE54u;
            goto label_17ce54;
        }
    }
    ctx->pc = 0x17CD98u;
label_17cd98:
    // 0x17cd98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd9c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CD9Cu;
    {
        const bool branch_taken_0x17cd9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD9Cu;
        // 0x17cda0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd9c) {
            ctx->pc = 0x17CDA8u;
            goto label_17cda8;
        }
    }
    ctx->pc = 0x17CDA4u;
    // 0x17cda4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17cda8:
    // 0x17cda8: 0xc0680b6  jal         func_1A02D8
    ctx->pc = 0x17CDA8u;
    SET_GPR_U32(ctx, 31, 0x17CDB0u);
    ctx->pc = 0x17CDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDA8u;
    // 0x17cdac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A02D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02D8u, 0x17CDA8u, 0x17CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDB0u;
label_17cdb0:
    // 0x17cdb0: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x17CDB0u;
    {
        const bool branch_taken_0x17cdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cdb0) {
            ctx->pc = 0x17CDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CDB0u;
            // 0x17cdb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE54u;
            goto label_17ce54;
        }
    }
    ctx->pc = 0x17CDB8u;
    // 0x17cdb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cdb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdbc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CDBCu;
    {
        const bool branch_taken_0x17cdbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDBCu;
        // 0x17cdc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdbc) {
            ctx->pc = 0x17CDC8u;
            goto label_17cdc8;
        }
    }
    ctx->pc = 0x17CDC4u;
    // 0x17cdc4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17cdc8:
    // 0x17cdc8: 0xc0680a8  jal         func_1A02A0
    ctx->pc = 0x17CDC8u;
    SET_GPR_U32(ctx, 31, 0x17CDD0u);
    ctx->pc = 0x1A02A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02A0u, 0x17CDC8u, 0x17CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDD0u;
label_17cdd0:
    // 0x17cdd0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x17CDD0u;
    {
        const bool branch_taken_0x17cdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cdd0) {
            ctx->pc = 0x17CDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CDD0u;
            // 0x17cdd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE54u;
            goto label_17ce54;
        }
    }
    ctx->pc = 0x17CDD8u;
    // 0x17cdd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cddc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CDDCu;
    {
        const bool branch_taken_0x17cddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDDCu;
        // 0x17cde0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cddc) {
            ctx->pc = 0x17CDE8u;
            goto label_17cde8;
        }
    }
    ctx->pc = 0x17CDE4u;
    // 0x17cde4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17cde8:
    // 0x17cde8: 0xc0680b6  jal         func_1A02D8
    ctx->pc = 0x17CDE8u;
    SET_GPR_U32(ctx, 31, 0x17CDF0u);
    ctx->pc = 0x17CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDE8u;
    // 0x17cdec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A02D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02D8u, 0x17CDE8u, 0x17CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDF0u;
label_17cdf0:
    // 0x17cdf0: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x17CDF0u;
    {
        const bool branch_taken_0x17cdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cdf0) {
            ctx->pc = 0x17CDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CDF0u;
            // 0x17cdf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE54u;
            goto label_17ce54;
        }
    }
    ctx->pc = 0x17CDF8u;
    // 0x17cdf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cdf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdfc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CDFCu;
    {
        const bool branch_taken_0x17cdfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDFCu;
        // 0x17ce00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdfc) {
            ctx->pc = 0x17CE08u;
            goto label_17ce08;
        }
    }
    ctx->pc = 0x17CE04u;
    // 0x17ce04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17ce08:
    // 0x17ce08: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17CE08u;
    SET_GPR_U32(ctx, 31, 0x17CE10u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17CE08u, 0x17CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE10u;
label_17ce10:
    // 0x17ce10: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x17CE10u;
    {
        const bool branch_taken_0x17ce10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ce10) {
            ctx->pc = 0x17CE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CE10u;
            // 0x17ce14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE54u;
            goto label_17ce54;
        }
    }
    ctx->pc = 0x17CE18u;
    // 0x17ce18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ce18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce1c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CE1Cu;
    {
        const bool branch_taken_0x17ce1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE1Cu;
        // 0x17ce20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce1c) {
            ctx->pc = 0x17CE28u;
            goto label_17ce28;
        }
    }
    ctx->pc = 0x17CE24u;
    // 0x17ce24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17ce24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17ce28:
    // 0x17ce28: 0xc0680a8  jal         func_1A02A0
    ctx->pc = 0x17CE28u;
    SET_GPR_U32(ctx, 31, 0x17CE30u);
    ctx->pc = 0x1A02A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02A0u, 0x17CE28u, 0x17CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE30u;
label_17ce30:
    // 0x17ce30: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17CE30u;
    {
        const bool branch_taken_0x17ce30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ce30) {
            ctx->pc = 0x17CE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CE30u;
            // 0x17ce34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE54u;
            goto label_17ce54;
        }
    }
    ctx->pc = 0x17CE38u;
    // 0x17ce38: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17ce38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17ce3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ce3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce40: 0x24a57bc0  addiu       $a1, $a1, 0x7BC0
    ctx->pc = 0x17ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31680));
    // 0x17ce44: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17CE44u;
    SET_GPR_U32(ctx, 31, 0x17CE4Cu);
    ctx->pc = 0x17CE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE44u;
    // 0x17ce48: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17CE44u, 0x17CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE4Cu;
label_17ce4c:
    // 0x17ce4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ce4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ce50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ce54:
    // 0x17ce54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ce54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ce58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ce58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ce5c: 0x3e00008  jr          $ra
    ctx->pc = 0x17CE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE5Cu;
        // 0x17ce60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CE64u;
}
