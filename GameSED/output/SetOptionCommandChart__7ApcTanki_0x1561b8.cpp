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

// Function: SetOptionCommandChart__7ApcTanki
// Address: 0x1561b8 - 0x15623c
void SetOptionCommandChart__7ApcTanki_0x1561b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetOptionCommandChart__7ApcTanki_0x1561b8");
#endif

    switch (ctx->pc) {
        case 0x1561ecu: goto label_1561ec;
        case 0x15620cu: goto label_15620c;
        case 0x15621cu: goto label_15621c;
        default: break;
    }

    ctx->pc = 0x1561b8u;

    // 0x1561b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1561b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1561bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1561bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1561c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1561c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1561c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1561c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1561c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1561ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1561d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1561d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561d4: 0xae11089c  sw          $s1, 0x89C($s0)
    ctx->pc = 0x1561d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2204), GPR_U32(ctx, 17));
    // 0x1561d8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1561D8u;
    {
        const bool branch_taken_0x1561d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561D8u;
        // 0x1561dc: 0x112940  sll         $a1, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561d8) {
            ctx->pc = 0x1561E4u;
            goto label_1561e4;
        }
    }
    ctx->pc = 0x1561E0u;
    // 0x1561e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1561e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1561e4:
    // 0x1561e4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1561E4u;
    SET_GPR_U32(ctx, 31, 0x1561ECu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1561E4u, 0x1561ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1561ECu;
label_1561ec:
    // 0x1561ec: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1561ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1561f0: 0x24a56de8  addiu       $a1, $a1, 0x6DE8
    ctx->pc = 0x1561f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28136));
    // 0x1561f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1561f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1561f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1561fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1561FCu;
    {
        const bool branch_taken_0x1561fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561FCu;
        // 0x156200: 0xae020898  sw          $v0, 0x898($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561fc) {
            ctx->pc = 0x15620Cu;
            goto label_15620c;
        }
    }
    ctx->pc = 0x156204u;
    // 0x156204: 0xc068186  jal         func_1A0618
    ctx->pc = 0x156204u;
    SET_GPR_U32(ctx, 31, 0x15620Cu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x156204u, 0x15620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15620Cu;
label_15620c:
    // 0x15620c: 0x8e040898  lw          $a0, 0x898($s0)
    ctx->pc = 0x15620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x156210: 0x113140  sll         $a2, $s1, 5
    ctx->pc = 0x156210u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x156214: 0xc067294  jal         func_19CA50
    ctx->pc = 0x156214u;
    SET_GPR_U32(ctx, 31, 0x15621Cu);
    ctx->pc = 0x156218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156214u;
    // 0x156218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x156214u, 0x15621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15621Cu;
label_15621c:
    // 0x15621c: 0xae0008a4  sw          $zero, 0x8A4($s0)
    ctx->pc = 0x15621cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2212), GPR_U32(ctx, 0));
    // 0x156220: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x156220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x156224: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156228: 0xae0208a0  sw          $v0, 0x8A0($s0)
    ctx->pc = 0x156228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2208), GPR_U32(ctx, 2));
    // 0x15622c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15622cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156234: 0x3e00008  jr          $ra
    ctx->pc = 0x156234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156234u;
        // 0x156238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15623Cu;
}
