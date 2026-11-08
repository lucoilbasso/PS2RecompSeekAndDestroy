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

// Function: __eh_free
// Address: 0x1cd718 - 0x1cd7a8
void ps2___eh_free_0x1cd718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___eh_free_0x1cd718");
#endif

    switch (ctx->pc) {
        case 0x1cd72cu: goto label_1cd72c;
        case 0x1cd768u: goto label_1cd768;
        default: break;
    }

    ctx->pc = 0x1cd718u;

    // 0x1cd718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd71c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd720: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd724: 0xc07349c  jal         func_1CD270
    ctx->pc = 0x1CD724u;
    SET_GPR_U32(ctx, 31, 0x1CD72Cu);
    ctx->pc = 0x1CD728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD724u;
    // 0x1cd728: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD270u, 0x1CD724u, 0x1CD72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD72Cu;
label_1cd72c:
    // 0x1cd72c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cd72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd730: 0x2061823  subu        $v1, $s0, $a2
    ctx->pc = 0x1cd730u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1cd734: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x1cd734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1cd738: 0x2ca200c0  sltiu       $v0, $a1, 0xC0
    ctx->pc = 0x1cd738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)192) ? 1 : 0);
    // 0x1cd73c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CD73Cu;
    {
        const bool branch_taken_0x1cd73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD73Cu;
        // 0x1cd740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd73c) {
            ctx->pc = 0x1CD798u;
            goto label_1cd798;
        }
    }
    ctx->pc = 0x1CD744u;
    // 0x1cd744: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cd744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cd748: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x1cd748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1cd74c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1cd74cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1cd750: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x1cd750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x1cd754: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd758: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x1cd758u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1cd75c: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1cd75cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1cd760: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x1cd760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x1cd764: 0x0  nop
    ctx->pc = 0x1cd764u;
    // NOP
label_1cd768:
    // 0x1cd768: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1cd768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cd76c: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x1cd76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1cd770: 0x0  nop
    ctx->pc = 0x1cd770u;
    // NOP
    // 0x1cd774: 0x0  nop
    ctx->pc = 0x1cd774u;
    // NOP
    // 0x1cd778: 0x0  nop
    ctx->pc = 0x1cd778u;
    // NOP
    // 0x1cd77c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CD77Cu;
    {
        const bool branch_taken_0x1cd77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd77c) {
            ctx->pc = 0x1CD780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD77Cu;
            // 0x1cd780: 0x641826  xor         $v1, $v1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd768;
        }
    }
    ctx->pc = 0x1CD784u;
    // 0x1cd784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd788: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd78c: 0xacc300d0  sw          $v1, 0xD0($a2)
    ctx->pc = 0x1cd78cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 3));
    // 0x1cd790: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD790u;
        // 0x1cd794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD798u;
label_1cd798:
    // 0x1cd798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd79c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd7a0: 0x8073d72  j           func_1CF5C8
    ctx->pc = 0x1CD7A0u;
    ctx->pc = 0x1CD7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7A0u;
    // 0x1cd7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5C8u;
    free_0x1cf5c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CD7A8u;
}
