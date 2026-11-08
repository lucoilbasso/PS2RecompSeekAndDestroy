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

// Function: ExtraPartsControl__7ApcTanki
// Address: 0x155bb8 - 0x155c5c
void ExtraPartsControl__7ApcTanki_0x155bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtraPartsControl__7ApcTanki_0x155bb8");
#endif

    switch (ctx->pc) {
        case 0x155c04u: goto label_155c04;
        case 0x155c20u: goto label_155c20;
        case 0x155c40u: goto label_155c40;
        default: break;
    }

    ctx->pc = 0x155bb8u;

    // 0x155bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155bbc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x155bbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155bc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155bcc: 0x2607079c  addiu       $a3, $s0, 0x79C
    ctx->pc = 0x155bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
    // 0x155bd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155bd4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x155bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bd8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x155bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bdc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x155bdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155be0: 0x8e080264  lw          $t0, 0x264($s0)
    ctx->pc = 0x155be0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x155be4: 0x8cf10010  lw          $s1, 0x10($a3)
    ctx->pc = 0x155be4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x155be8: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x155be8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
    // 0x155bec: 0x81883  sra         $v1, $t0, 2
    ctx->pc = 0x155becu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 2));
    // 0x155bf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x155bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x155bf4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155BF4u;
    {
        const bool branch_taken_0x155bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BF4u;
        // 0x155bf8: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155bf4) {
            ctx->pc = 0x155C10u;
            goto label_155c10;
        }
    }
    ctx->pc = 0x155BFCu;
    // 0x155bfc: 0xc054016  jal         func_150058
    ctx->pc = 0x155BFCu;
    SET_GPR_U32(ctx, 31, 0x155C04u);
    ctx->pc = 0x150058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150058u, 0x155BFCu, 0x155C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C04u;
label_155c04:
    // 0x155c04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x155C04u;
    {
        const bool branch_taken_0x155c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C04u;
        // 0x155c08: 0x8e02037c  lw          $v0, 0x37C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c04) {
            ctx->pc = 0x155C44u;
            goto label_155c44;
        }
    }
    ctx->pc = 0x155C0Cu;
    // 0x155c0c: 0x0  nop
    ctx->pc = 0x155c0cu;
    // NOP
label_155c10:
    // 0x155c10: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x155C10u;
    {
        const bool branch_taken_0x155c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C10u;
        // 0x155c14: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c10) {
            ctx->pc = 0x155C28u;
            goto label_155c28;
        }
    }
    ctx->pc = 0x155C18u;
    // 0x155c18: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x155C18u;
    SET_GPR_U32(ctx, 31, 0x155C20u);
    ctx->pc = 0x155C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C18u;
    // 0x155c1c: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x155C18u, 0x155C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C20u;
label_155c20:
    // 0x155c20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x155C20u;
    {
        const bool branch_taken_0x155c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C20u;
        // 0x155c24: 0x8e02037c  lw          $v0, 0x37C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c20) {
            ctx->pc = 0x155C44u;
            goto label_155c44;
        }
    }
    ctx->pc = 0x155C28u;
label_155c28:
    // 0x155c28: 0x810c3  sra         $v0, $t0, 3
    ctx->pc = 0x155c28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 3));
    // 0x155c2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x155c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x155c30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155C30u;
    {
        const bool branch_taken_0x155c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C30u;
        // 0x155c34: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c30) {
            ctx->pc = 0x155C40u;
            goto label_155c40;
        }
    }
    ctx->pc = 0x155C38u;
    // 0x155c38: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x155C38u;
    SET_GPR_U32(ctx, 31, 0x155C40u);
    ctx->pc = 0x155C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C38u;
    // 0x155c3c: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x155C38u, 0x155C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C40u;
label_155c40:
    // 0x155c40: 0x8e02037c  lw          $v0, 0x37C($s0)
    ctx->pc = 0x155c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
label_155c44:
    // 0x155c44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155c48: 0xae221244  sw          $v0, 0x1244($s1)
    ctx->pc = 0x155c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 2));
    // 0x155c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155c50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155c54: 0x3e00008  jr          $ra
    ctx->pc = 0x155C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C54u;
        // 0x155c58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155C5Cu;
}
